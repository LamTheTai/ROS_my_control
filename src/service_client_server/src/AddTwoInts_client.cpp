#include "ros/ros.h"
#include "service_client_server/AddTwoInts.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "add_two_ints_client");
    if(argc != 3){
        ROS_INFO("usage: add_two_ints_client X Y");
        return 1;
    }
    ros::NodeHandle hd;
    ros::ServiceClient client = hd.serviceClient<service_client_server::AddTwoInts>("add_two_ints");

    service_client_server::AddTwoInts srv;
    srv.request.a = atoll(argv[1]);
    srv.request.b = atoll(argv[2]);

    if(client.call(srv))
    {
        ROS_INFO("Sum: %ld", (long int)srv.response.sum);
    }else{
        ROS_ERROR("Failed to call");
        return 1;
    }

    return 0;
}
