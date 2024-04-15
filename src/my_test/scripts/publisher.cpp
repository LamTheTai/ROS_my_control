#include<iostream>
#include<ros/ros.h>
#include<geometry_msgs/Twist.h>
#include<turtlesim/Pose.h>

ros::Publisher pub;

geometry_msgs::Twist getMessage(double x, double y, double z)
{
    geometry_msgs::Twist msg;
    msg.linear.x = x;
    msg.linear.y = y;
    msg.angular.z = z;
    return msg;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "turtle_control");
    ros::NodeHandle hd;
    pub = hd.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);
    ros::Rate loop(100);

    while(ros::ok)
    {
        geometry_msgs::Twist msg = getMessage(1.0, 0.0, 0.5);
        pub.publish(msg);
        loop.sleep();
        ros::spinOnce();
    }

    return 0;
}