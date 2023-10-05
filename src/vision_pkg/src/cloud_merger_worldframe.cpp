#include <ros/ros.h>
#include <sensor_msgs/PointCloud2.h>
#include <tf2_ros/transform_listener.h>
#include <pcl_ros/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/conversions.h>
#include <pcl_conversions/pcl_conversions.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <pcl_ros/transforms.h>
#include <message_filters/subscriber.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <pcl/filters/voxel_grid.h> 
#include <pcl/filters/passthrough.h> 


class PointCloudMerger
{
public:

    typedef message_filters::sync_policies::ApproximateTime<sensor_msgs::PointCloud2, sensor_msgs::PointCloud2> MySyncPolicy;

    message_filters::Subscriber<sensor_msgs::PointCloud2> cloud1_sub_;
    message_filters::Subscriber<sensor_msgs::PointCloud2> cloud2_sub_;
    message_filters::Synchronizer<MySyncPolicy> sync_;
    ros::Publisher merged_cloud_pub_;

    tf2_ros::Buffer tf_buffer_;
    tf2_ros::TransformListener tf_listener_;

    PointCloudMerger(ros::NodeHandle& nh)
        : tf_listener_(tf_buffer_),
          cloud1_sub_(nh, "/zed_multi/zed2i_long/zed_nodelet_front/point_cloud/cloud_registered", 1),
          cloud2_sub_(nh, "/zed_multi/zed2i_short/zed_nodelet_rear/point_cloud/cloud_registered", 1),
          sync_(MySyncPolicy(1), cloud1_sub_, cloud2_sub_) // 1 is the queue size
    {
        sync_.registerCallback(boost::bind(&PointCloudMerger::cloudCallback, this, _1, _2));
        merged_cloud_pub_ = nh.advertise<sensor_msgs::PointCloud2>("/camera3/depth/points", 1);
    }


    void cloudCallback(const sensor_msgs::PointCloud2::ConstPtr& cloud1_msg,
                    const sensor_msgs::PointCloud2::ConstPtr& cloud2_msg)
        {
            // Transform cloud1 to 'world' frame
            sensor_msgs::PointCloud2 cloud1_transformed;
            pcl_ros::transformPointCloud("world", *cloud1_msg, cloud1_transformed, tf_buffer_);

            // Transform cloud2 to 'world' frame
            sensor_msgs::PointCloud2 cloud2_transformed;
            pcl_ros::transformPointCloud("world", *cloud2_msg, cloud2_transformed, tf_buffer_);

            // Convert to pcl pointcloud
            pcl::PointCloud<pcl::PointXYZ> pcl_cloud1, pcl_cloud2, pcl_merged_cloud;
            pcl::fromROSMsg(cloud1_transformed, pcl_cloud1);
            pcl::fromROSMsg(cloud2_transformed, pcl_cloud2);

            // Merge the pointclouds
            pcl_merged_cloud = pcl_cloud1 + pcl_cloud2;

            //cut the merged_cloud at a certain distance
            // Cut the merged_cloud at a certain distance in x direction
            pcl::PointCloud<pcl::PointXYZ> pcl_filtered_cloud_x;
            pcl::PassThrough<pcl::PointXYZ> pass_x;
            pass_x.setInputCloud(pcl_merged_cloud.makeShared());
            pass_x.setFilterFieldName("x");
            // Min and max values in x axis to keep
            pass_x.setFilterLimits(-0.17, 0.73);
            pass_x.filter(pcl_filtered_cloud_x);

            // Now, filter in the y direction
            pcl::PointCloud<pcl::PointXYZ> pcl_filtered_cloud_y;
            pcl::PassThrough<pcl::PointXYZ> pass_y;
            pass_y.setInputCloud(pcl_filtered_cloud_x.makeShared()); // Use the already filtered cloud in x direction
            pass_y.setFilterFieldName("y");
            // Min and max values in y axis to keep. Adjust these limits to your needs!
            pass_y.setFilterLimits(-0.5, 0.65);
            pass_y.filter(pcl_filtered_cloud_y);

            // Convert to ROS message
            sensor_msgs::PointCloud2 downsampled_cloud;
            pcl::toROSMsg(pcl_filtered_cloud_y, downsampled_cloud);
            // // Create the filtering object
            // pcl::VoxelGrid<pcl::PointXYZ> sor;
            // sor.setInputCloud(pcl_filtered_cloud.makeShared());
            // sor.setLeafSize(0.01f, 0.01f, 0.01f);  // the higher, the less samples
            // pcl::PointCloud<pcl::PointXYZ> pcl_downsampled_cloud;
            // sor.filter(pcl_downsampled_cloud);
            
            // // Convert back to sensor_msgs::PointCloud2
            // sensor_msgs::PointCloud2 downsampled_cloud;
            // pcl::toROSMsg(pcl_downsampled_cloud, downsampled_cloud);

            //>>>>>>>>>>>>>>>>>>>>>>

            // Make sure the merged cloud is in 'world' frame
            downsampled_cloud.header.frame_id = "world";
            downsampled_cloud.header.stamp = ros::Time::now();

            // Publish the downsampled pointcloud
            merged_cloud_pub_.publish(downsampled_cloud);
        }

};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "pointcloud_merger");
    ros::NodeHandle nh;

    PointCloudMerger pointcloud_merger(nh);

    ros::spin();
}