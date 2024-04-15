#include <iostream>
#include <ros/ros.h>
#include <turtlesim/Pose.h>

ros::Subscriber sub;
turtlesim::Pose current_pose;

void poseCallback(const turtlesim::Pose::ConstPtr& msg)
{
    current_pose = *msg;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "turtlesim_pose");
    ros::NodeHandle nh;
    sub = nh.subscribe("turtle1/pose", 1000, poseCallback); 
    ros::Rate loop_rate(100);

    while (ros::ok())
    {
        std::cout << current_pose.x << " " << current_pose.y << " " << current_pose.theta << std::endl; 
        loop_rate.sleep();
        ros::spinOnce();
    }
    return 0;
}
