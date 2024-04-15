cmake_minimum_required(VERSION 3.0.2)
project(my_test)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)

# Thêm file .srv vào danh sách service files
add_service_files(
  FILES
  AddTwoInts.srv
)

# Generate các messages từ service
generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES my_test
  CATKIN_DEPENDS roscpp rospy std_msgs
  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(pub scripts/publisher.cpp)
add_executable(sub scripts/subscriber.cpp)
add_executable(sub_pub scripts/pub_sub.cpp)
add_executable(pid scripts/pid.cpp)


target_link_libraries(pub
  ${catkin_LIBRARIES}
)

target_link_libraries(sub
  ${catkin_LIBRARIES}
)

target_link_libraries(sub_pub
  ${catkin_LIBRARIES}
)

target_link_libraries(pid
  ${catkin_LIBRARIES}
)
