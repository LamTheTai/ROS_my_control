#include<iostream>
#include<ros/ros.h>
#include<geometry_msgs/Twist.h>
#include<turtlesim/Pose.h>

ros::Publisher pub;
ros::Subscriber sub;
turtlesim::Pose current_pose;

void poseCallback(const turtlesim::Pose::ConstPtr& msg_pose)
{
    current_pose = *msg_pose;
}

geometry_msgs::Twist getMessage(double x, double y, double z)
{
    geometry_msgs::Twist msg;
    msg.linear.x = x;
    msg.linear.y = y;
    msg.angular.z = z;
    return msg;
}

geometry_msgs::Twist draw_rectangle(double a, double b)
{
    geometry_msgs::Twist msg_rect;
    return msg_rect;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "turtle_control");
    ros::NodeHandle hd;
    pub = hd.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);

    ros::init(argc, argv, "turtlesim_pose");
    ros::NodeHandle nh;
    sub = nh.subscribe("turtle1/pose", 1000, poseCallback); 

    ros::Rate loop(100);

    while(ros::ok)
    {
        geometry_msgs::Twist msg;
        /*
        if(current_pose.x > 10 || current_pose.x < 2 || current_pose.y > 10 || current_pose.y < 2)
        {
            msg = getMessage(1.0, 0.0, 1.0);
        }else{
            msg = getMessage(3.0, 0.0, 0.0);
        }
        */

        msg = getMessage(0.0, 3.0, 0.0);

        pub.publish(msg);
        //std::cout << current_pose.x << " " << current_pose.y << " " << current_pose.theta << std::endl; 
        
        loop.sleep();
        ros::spinOnce();
    }

    return 0;
}