# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/anhtat/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/anhtat/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anhtat/my_control/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anhtat/my_control/build

# Include any dependencies generated for this target.
include service_client_server/CMakeFiles/AddTwoInts_client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include service_client_server/CMakeFiles/AddTwoInts_client.dir/compiler_depend.make

# Include the progress variables for this target.
include service_client_server/CMakeFiles/AddTwoInts_client.dir/progress.make

# Include the compile flags for this target's objects.
include service_client_server/CMakeFiles/AddTwoInts_client.dir/flags.make

service_client_server/CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o: service_client_server/CMakeFiles/AddTwoInts_client.dir/flags.make
service_client_server/CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o: /home/anhtat/my_control/src/service_client_server/src/AddTwoInts_client.cpp
service_client_server/CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o: service_client_server/CMakeFiles/AddTwoInts_client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anhtat/my_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object service_client_server/CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o"
	cd /home/anhtat/my_control/build/service_client_server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT service_client_server/CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o -MF CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o.d -o CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o -c /home/anhtat/my_control/src/service_client_server/src/AddTwoInts_client.cpp

service_client_server/CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.i"
	cd /home/anhtat/my_control/build/service_client_server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anhtat/my_control/src/service_client_server/src/AddTwoInts_client.cpp > CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.i

service_client_server/CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.s"
	cd /home/anhtat/my_control/build/service_client_server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anhtat/my_control/src/service_client_server/src/AddTwoInts_client.cpp -o CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.s

# Object files for target AddTwoInts_client
AddTwoInts_client_OBJECTS = \
"CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o"

# External object files for target AddTwoInts_client
AddTwoInts_client_EXTERNAL_OBJECTS =

/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: service_client_server/CMakeFiles/AddTwoInts_client.dir/src/AddTwoInts_client.cpp.o
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: service_client_server/CMakeFiles/AddTwoInts_client.dir/build.make
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /opt/ros/noetic/lib/libroscpp.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /opt/ros/noetic/lib/librosconsole.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /opt/ros/noetic/lib/librostime.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /opt/ros/noetic/lib/libcpp_common.so
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client: service_client_server/CMakeFiles/AddTwoInts_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anhtat/my_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client"
	cd /home/anhtat/my_control/build/service_client_server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AddTwoInts_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
service_client_server/CMakeFiles/AddTwoInts_client.dir/build: /home/anhtat/my_control/devel/lib/service_client_server/AddTwoInts_client
.PHONY : service_client_server/CMakeFiles/AddTwoInts_client.dir/build

service_client_server/CMakeFiles/AddTwoInts_client.dir/clean:
	cd /home/anhtat/my_control/build/service_client_server && $(CMAKE_COMMAND) -P CMakeFiles/AddTwoInts_client.dir/cmake_clean.cmake
.PHONY : service_client_server/CMakeFiles/AddTwoInts_client.dir/clean

service_client_server/CMakeFiles/AddTwoInts_client.dir/depend:
	cd /home/anhtat/my_control/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anhtat/my_control/src /home/anhtat/my_control/src/service_client_server /home/anhtat/my_control/build /home/anhtat/my_control/build/service_client_server /home/anhtat/my_control/build/service_client_server/CMakeFiles/AddTwoInts_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : service_client_server/CMakeFiles/AddTwoInts_client.dir/depend

