// Generated by gencpp from file zed_interfaces/Object.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_OBJECT_H
#define ZED_INTERFACES_MESSAGE_OBJECT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <zed_interfaces/BoundingBox2Di.h>
#include <zed_interfaces/BoundingBox3D.h>
#include <zed_interfaces/BoundingBox2Df.h>
#include <zed_interfaces/BoundingBox3D.h>
#include <zed_interfaces/Skeleton2D.h>
#include <zed_interfaces/Skeleton3D.h>

namespace zed_interfaces
{
template <class ContainerAllocator>
struct Object_
{
  typedef Object_<ContainerAllocator> Type;

  Object_()
    : label()
    , label_id(0)
    , sublabel()
    , confidence(0.0)
    , position()
    , position_covariance()
    , velocity()
    , tracking_available(false)
    , tracking_state(0)
    , action_state(0)
    , bounding_box_2d()
    , bounding_box_3d()
    , dimensions_3d()
    , skeleton_available(false)
    , head_bounding_box_2d()
    , head_bounding_box_3d()
    , head_position()
    , skeleton_2d()
    , skeleton_3d()  {
      position.assign(0.0);

      position_covariance.assign(0.0);

      velocity.assign(0.0);

      dimensions_3d.assign(0.0);

      head_position.assign(0.0);
  }
  Object_(const ContainerAllocator& _alloc)
    : label(_alloc)
    , label_id(0)
    , sublabel(_alloc)
    , confidence(0.0)
    , position()
    , position_covariance()
    , velocity()
    , tracking_available(false)
    , tracking_state(0)
    , action_state(0)
    , bounding_box_2d(_alloc)
    , bounding_box_3d(_alloc)
    , dimensions_3d()
    , skeleton_available(false)
    , head_bounding_box_2d(_alloc)
    , head_bounding_box_3d(_alloc)
    , head_position()
    , skeleton_2d(_alloc)
    , skeleton_3d(_alloc)  {
  (void)_alloc;
      position.assign(0.0);

      position_covariance.assign(0.0);

      velocity.assign(0.0);

      dimensions_3d.assign(0.0);

      head_position.assign(0.0);
  }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _label_type;
  _label_type label;

   typedef int16_t _label_id_type;
  _label_id_type label_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _sublabel_type;
  _sublabel_type sublabel;

   typedef float _confidence_type;
  _confidence_type confidence;

   typedef boost::array<float, 3>  _position_type;
  _position_type position;

   typedef boost::array<float, 6>  _position_covariance_type;
  _position_covariance_type position_covariance;

   typedef boost::array<float, 3>  _velocity_type;
  _velocity_type velocity;

   typedef uint8_t _tracking_available_type;
  _tracking_available_type tracking_available;

   typedef int8_t _tracking_state_type;
  _tracking_state_type tracking_state;

   typedef int8_t _action_state_type;
  _action_state_type action_state;

   typedef  ::zed_interfaces::BoundingBox2Di_<ContainerAllocator>  _bounding_box_2d_type;
  _bounding_box_2d_type bounding_box_2d;

   typedef  ::zed_interfaces::BoundingBox3D_<ContainerAllocator>  _bounding_box_3d_type;
  _bounding_box_3d_type bounding_box_3d;

   typedef boost::array<float, 3>  _dimensions_3d_type;
  _dimensions_3d_type dimensions_3d;

   typedef uint8_t _skeleton_available_type;
  _skeleton_available_type skeleton_available;

   typedef  ::zed_interfaces::BoundingBox2Df_<ContainerAllocator>  _head_bounding_box_2d_type;
  _head_bounding_box_2d_type head_bounding_box_2d;

   typedef  ::zed_interfaces::BoundingBox3D_<ContainerAllocator>  _head_bounding_box_3d_type;
  _head_bounding_box_3d_type head_bounding_box_3d;

   typedef boost::array<float, 3>  _head_position_type;
  _head_position_type head_position;

   typedef  ::zed_interfaces::Skeleton2D_<ContainerAllocator>  _skeleton_2d_type;
  _skeleton_2d_type skeleton_2d;

   typedef  ::zed_interfaces::Skeleton3D_<ContainerAllocator>  _skeleton_3d_type;
  _skeleton_3d_type skeleton_3d;





  typedef boost::shared_ptr< ::zed_interfaces::Object_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::Object_<ContainerAllocator> const> ConstPtr;

}; // struct Object_

typedef ::zed_interfaces::Object_<std::allocator<void> > Object;

typedef boost::shared_ptr< ::zed_interfaces::Object > ObjectPtr;
typedef boost::shared_ptr< ::zed_interfaces::Object const> ObjectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::Object_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::Object_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::zed_interfaces::Object_<ContainerAllocator1> & lhs, const ::zed_interfaces::Object_<ContainerAllocator2> & rhs)
{
  return lhs.label == rhs.label &&
    lhs.label_id == rhs.label_id &&
    lhs.sublabel == rhs.sublabel &&
    lhs.confidence == rhs.confidence &&
    lhs.position == rhs.position &&
    lhs.position_covariance == rhs.position_covariance &&
    lhs.velocity == rhs.velocity &&
    lhs.tracking_available == rhs.tracking_available &&
    lhs.tracking_state == rhs.tracking_state &&
    lhs.action_state == rhs.action_state &&
    lhs.bounding_box_2d == rhs.bounding_box_2d &&
    lhs.bounding_box_3d == rhs.bounding_box_3d &&
    lhs.dimensions_3d == rhs.dimensions_3d &&
    lhs.skeleton_available == rhs.skeleton_available &&
    lhs.head_bounding_box_2d == rhs.head_bounding_box_2d &&
    lhs.head_bounding_box_3d == rhs.head_bounding_box_3d &&
    lhs.head_position == rhs.head_position &&
    lhs.skeleton_2d == rhs.skeleton_2d &&
    lhs.skeleton_3d == rhs.skeleton_3d;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::zed_interfaces::Object_<ContainerAllocator1> & lhs, const ::zed_interfaces::Object_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::Object_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::Object_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::Object_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::Object_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::Object_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::Object_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return "20668bd5819407b0c69c8d1de510a3a2";
  }

  static const char* value(const ::zed_interfaces::Object_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x20668bd5819407b0ULL;
  static const uint64_t static_value2 = 0xc69c8d1de510a3a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/Object";
  }

  static const char* value(const ::zed_interfaces::Object_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Object label\n"
"string label\n"
"\n"
"# Object label ID\n"
"int16 label_id\n"
"\n"
"# Object sub\n"
"string sublabel\n"
"\n"
"# Object confidence level (1-99)\n"
"float32 confidence\n"
"\n"
"# Object centroid position\n"
"float32[3] position\n"
"\n"
"# Position covariance\n"
"float32[6] position_covariance\n"
"\n"
"# Object velocity\n"
"float32[3] velocity\n"
"\n"
"# Tracking available\n"
"bool tracking_available\n"
"\n"
"# Tracking state\n"
"# 0 -> OFF (object not valid)\n"
"# 1 -> OK\n"
"# 2 -> SEARCHING (occlusion occurred, trajectory is estimated)\n"
"int8 tracking_state\n"
"\n"
"# Action state\n"
"# 0 -> IDLE\n"
"# 2 -> MOVING\n"
"int8 action_state\n"
"\n"
"# 2D Bounding box projected to Camera image\n"
"zed_interfaces/BoundingBox2Di bounding_box_2d\n"
"\n"
"# 3D Bounding box in world frame\n"
"zed_interfaces/BoundingBox3D bounding_box_3d\n"
"\n"
"# 3D dimensions (width, height, lenght)\n"
"float32[3] dimensions_3d\n"
"\n"
"# Is skeleton available?\n"
"bool skeleton_available\n"
"\n"
"# 2D Bounding box projected to Camera image of the person head\n"
"zed_interfaces/BoundingBox2Df head_bounding_box_2d\n"
"\n"
"# 3D Bounding box in world frame of the person head\n"
"zed_interfaces/BoundingBox3D head_bounding_box_3d\n"
"\n"
"# 3D position of the centroid of the person head\n"
"float32[3] head_position\n"
"\n"
"# 2D Person skeleton projected to Camera image\n"
"zed_interfaces/Skeleton2D skeleton_2d\n"
"\n"
"# 3D Person skeleton in world frame\n"
"zed_interfaces/Skeleton3D skeleton_3d\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/BoundingBox2Di\n"
"#      0 ------- 1\n"
"#      |         |\n"
"#      |         |\n"
"#      |         |\n"
"#      3 ------- 2\n"
"zed_interfaces/Keypoint2Di[4] corners\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Keypoint2Di\n"
"uint32[2] kp\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/BoundingBox3D\n"
"#      1 ------- 2\n"
"#     /.        /|\n"
"#    0 ------- 3 |\n"
"#    | .       | |\n"
"#    | 5.......| 6\n"
"#    |.        |/\n"
"#    4 ------- 7\n"
"zed_interfaces/Keypoint3D[8] corners\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Keypoint3D\n"
"float32[3] kp\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/BoundingBox2Df\n"
"#      0 ------- 1\n"
"#      |         |\n"
"#      |         |\n"
"#      |         |\n"
"#      3 ------- 2\n"
"zed_interfaces/Keypoint2Df[4] corners\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Keypoint2Df\n"
"float32[2] kp\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Skeleton2D\n"
"# Skeleton joints indices\n"
"#        16-14   15-17\n"
"#             \\ /\n"
"#              0\n"
"#              |\n"
"#       2------1------5\n"
"#       |    |   |    |\n"
"#	    |    |   |    |\n"
"#       3    |   |    6\n"
"#       |    |   |    |\n"
"#       |    |   |    |\n"
"#       4    8   11   7\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#            9   12\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#           10   13\n"
"zed_interfaces/Keypoint2Df[18] keypoints\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Skeleton3D\n"
"# Skeleton joints indices\n"
"#        16-14   15-17\n"
"#             \\ /\n"
"#              0\n"
"#              |\n"
"#       2------1------5\n"
"#       |    |   |    |\n"
"#	    |    |   |    |\n"
"#       3    |   |    6\n"
"#       |    |   |    |\n"
"#       |    |   |    |\n"
"#       4    8   11   7\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#            9   12\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#           10   13\n"
"zed_interfaces/Keypoint3D[18] keypoints\n"
;
  }

  static const char* value(const ::zed_interfaces::Object_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::Object_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.label);
      stream.next(m.label_id);
      stream.next(m.sublabel);
      stream.next(m.confidence);
      stream.next(m.position);
      stream.next(m.position_covariance);
      stream.next(m.velocity);
      stream.next(m.tracking_available);
      stream.next(m.tracking_state);
      stream.next(m.action_state);
      stream.next(m.bounding_box_2d);
      stream.next(m.bounding_box_3d);
      stream.next(m.dimensions_3d);
      stream.next(m.skeleton_available);
      stream.next(m.head_bounding_box_2d);
      stream.next(m.head_bounding_box_3d);
      stream.next(m.head_position);
      stream.next(m.skeleton_2d);
      stream.next(m.skeleton_3d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Object_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::Object_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::Object_<ContainerAllocator>& v)
  {
    s << indent << "label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.label);
    s << indent << "label_id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.label_id);
    s << indent << "sublabel: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.sublabel);
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "position_covariance[]" << std::endl;
    for (size_t i = 0; i < v.position_covariance.size(); ++i)
    {
      s << indent << "  position_covariance[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position_covariance[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "tracking_available: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tracking_available);
    s << indent << "tracking_state: ";
    Printer<int8_t>::stream(s, indent + "  ", v.tracking_state);
    s << indent << "action_state: ";
    Printer<int8_t>::stream(s, indent + "  ", v.action_state);
    s << indent << "bounding_box_2d: ";
    s << std::endl;
    Printer< ::zed_interfaces::BoundingBox2Di_<ContainerAllocator> >::stream(s, indent + "  ", v.bounding_box_2d);
    s << indent << "bounding_box_3d: ";
    s << std::endl;
    Printer< ::zed_interfaces::BoundingBox3D_<ContainerAllocator> >::stream(s, indent + "  ", v.bounding_box_3d);
    s << indent << "dimensions_3d[]" << std::endl;
    for (size_t i = 0; i < v.dimensions_3d.size(); ++i)
    {
      s << indent << "  dimensions_3d[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.dimensions_3d[i]);
    }
    s << indent << "skeleton_available: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.skeleton_available);
    s << indent << "head_bounding_box_2d: ";
    s << std::endl;
    Printer< ::zed_interfaces::BoundingBox2Df_<ContainerAllocator> >::stream(s, indent + "  ", v.head_bounding_box_2d);
    s << indent << "head_bounding_box_3d: ";
    s << std::endl;
    Printer< ::zed_interfaces::BoundingBox3D_<ContainerAllocator> >::stream(s, indent + "  ", v.head_bounding_box_3d);
    s << indent << "head_position[]" << std::endl;
    for (size_t i = 0; i < v.head_position.size(); ++i)
    {
      s << indent << "  head_position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.head_position[i]);
    }
    s << indent << "skeleton_2d: ";
    s << std::endl;
    Printer< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >::stream(s, indent + "  ", v.skeleton_2d);
    s << indent << "skeleton_3d: ";
    s << std::endl;
    Printer< ::zed_interfaces::Skeleton3D_<ContainerAllocator> >::stream(s, indent + "  ", v.skeleton_3d);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_OBJECT_H
