cmake_minimum_required(VERSION 3.0.2)
project(my_service)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)


add_service_files(
  FILES
  AddTwoInts.srv
)

generate_messages(
  DEPENDENCIES
  std_msgs
)


catkin_package(
  INCLUDE_DIRS include
  LIBRARIES my_service
  CATKIN_DEPENDS roscpp std_msgs
  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(service_AddTwoInts src/service_AddTwoInts.cpp)

target_link_libraries(service_AddTwoInts
  ${catkin_LIBRARIES}
)

