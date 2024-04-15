#include <iostream>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Pose.h>
#include <cmath>

ros::Publisher pub;
turtlesim::Pose current_pose;
double I_distance = 0.0;
double previous_err_distance = 0.0;
double I_theta = 0.0;
double previous_err_theta = 0.0;

void poseCallback(const turtlesim::Pose::ConstPtr& msg) {
    current_pose = *msg;
}

inline geometry_msgs::Twist getMessage(double x, double y, double z) {
    geometry_msgs::Twist msg;
    msg.linear.x = x;
    msg.linear.y = y;
    msg.angular.z = z;
    return msg;
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "turtle_control");
    ros::NodeHandle nh;
    pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1000);
    ros::Subscriber sub = nh.subscribe("/turtle1/pose", 1000, poseCallback);
    
    const float PI = 3.14159, dt = 0.01;
    ros::Rate loopRate(100);

    double kp_distance = 0.45; 
    double ki_distance = 0;  
    double kd_distance = 0;  

    double kp_theta = 1.4;
    double ki_theta = 0.1;
    double kd_theta = 0.1; 

    while (ros::ok()) {
        std::cout << "Enter goal coordinates (x y): ";
        float x_goal, y_goal;
        std::cin >> x_goal >> y_goal;

        while (true) {
            ros::spinOnce();
            loopRate.sleep();

            double dx = x_goal - current_pose.x;
            double dy = y_goal - current_pose.y;
            double err_distance = sqrt(pow(dx, 2) + pow(dy, 2));
            std::cout << "Current Pose: " << current_pose.x << " " << current_pose.y << " " << current_pose.theta << '\n';

            if (err_distance < 0.1) {
                pub.publish(getMessage(0.0, 0.0, 0.0));
                break;
            } else {
                double dalpha = std::atan2(dy, dx) - current_pose.theta;
                dalpha = std::fmod(dalpha + PI, 2 * PI) - PI; // Wrap angle within [-π, π]

                // PID control for distance
                I_distance += err_distance;
                double D_distance = err_distance - previous_err_distance;
                double PID_distance = kp_distance * err_distance + ki_distance * I_distance + kd_distance * D_distance / dt;

                // PID control for angular
                double err_theta = dalpha;
                I_theta += err_theta;
                double D_theta = err_theta - previous_err_theta;
                double PID_theta = kp_theta * err_theta + ki_theta * I_theta + kd_theta * D_theta / dt;

                geometry_msgs::Twist msg = getMessage(PID_distance, 0.0, PID_theta);
                std::cout << "Published Message: " << msg.linear.x << " " << msg.linear.y << " " << msg.angular.z << '\n';
                pub.publish(msg);

                previous_err_distance = err_distance;
                previous_err_theta = err_theta;
            }
        }
    }

    return 0;
}
