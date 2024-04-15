cmake_minimum_required(VERSION 3.0.2)
project(service_client_server)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation

)

# Generate services in the 'srv' folder
add_service_files(
  FILES
  AddTwoInts.srv
)

# Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES service_client
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

add_executable(AddTwoInts_server src/AddTwoInts_server.cpp)
add_executable(AddTwoInts_client src/AddTwoInts_client.cpp)

target_link_libraries(AddTwoInts_server 
  ${catkin_LIBRARIES}
)

add_dependencies(AddTwoInts_server service_client_server_gencpp)

target_link_libraries(AddTwoInts_client 
  ${catkin_LIBRARIES}
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_dependencies(AddTwoInts_client service_client_server_gencpp)

