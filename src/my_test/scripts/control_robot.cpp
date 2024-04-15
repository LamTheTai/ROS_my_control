#include<iostream>
#include<ros/ros.h>
#include<geometry_msg/Twist.h>
#include<turtlesim/Pose.h>

ros::Publisher pub;
ros::Subscriber sub;
turtlesim::Pose current_pose;


int main(int argc,char** argv)
{
    ros::init(argc, argv, "control");
    ros::NodeHandle hd1;

    return 0;
}