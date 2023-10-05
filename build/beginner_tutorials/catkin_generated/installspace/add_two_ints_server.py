#!/usr/bin/env python3


from beginner_tutorials.srv import AddTwoInts, AddTwoIntsResponse
import rospy

def handle_add_two_ints(re):
    print("Returning [%s + %s = %s]"%(re.a, re.b, (re.a + re.b)))
    trial = AddTwoIntsResponse(sum = re.a+re.b+10) 
    return trial

def add_two_ints_server():
    rospy.init_node('add_two_ints_server')
    s = rospy.Service('add_two_ints', AddTwoInts, handle_add_two_ints)
    print("Ready to add two ints")
    rospy.spin()

if __name__ == "__main__":
    add_two_ints_server()