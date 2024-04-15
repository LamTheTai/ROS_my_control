#include <iostream>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Pose.h>
#include "my_service/AddTwoInts.h" 

bool add(my_service::AddTwoInts::Request &req, my_service::AddTwoInts::Response &res); 

int main(int argc, char** argv)
{
    ros::init(argc, argv, "rossrv"); 
    ros::NodeHandle hd;
    ros::ServiceServer service = hd.advertiseService("add_two_ints", add);
    ros::spin();
    return 0;
}

bool add(my_service::AddTwoInts::Request &req, my_service::AddTwoInts::Response &res) 
{
    res.sum = req.a + req.b;
    return true;
}
