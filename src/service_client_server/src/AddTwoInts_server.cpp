#include "ros/ros.h"
#include "service_client_server/AddTwoInts.h"

bool add(service_client_server::AddTwoInts::Request &req,
         service_client_server::AddTwoInts::Response &res)
{
    res.sum = req.a + req.b;
    ROS_INFO("request: x = %ld, y = %ld", (long int)req.a, (long int)req.b);
    ROS_INFO("sending back response: [%ld]", (long int)res.sum);
    return true;
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "add_two_ints_server");
    ros::NodeHandle hd;
    ros::ServiceServer service = hd.advertiseService("add_two_ints", add);
    ros::spin();

    return 0;
}
