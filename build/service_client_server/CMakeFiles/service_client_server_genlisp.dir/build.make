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

# Utility rule file for service_client_server_genlisp.

# Include any custom commands dependencies for this target.
include service_client_server/CMakeFiles/service_client_server_genlisp.dir/compiler_depend.make

# Include the progress variables for this target.
include service_client_server/CMakeFiles/service_client_server_genlisp.dir/progress.make

service_client_server_genlisp: service_client_server/CMakeFiles/service_client_server_genlisp.dir/build.make
.PHONY : service_client_server_genlisp

# Rule to build all files generated by this target.
service_client_server/CMakeFiles/service_client_server_genlisp.dir/build: service_client_server_genlisp
.PHONY : service_client_server/CMakeFiles/service_client_server_genlisp.dir/build

service_client_server/CMakeFiles/service_client_server_genlisp.dir/clean:
	cd /home/anhtat/my_control/build/service_client_server && $(CMAKE_COMMAND) -P CMakeFiles/service_client_server_genlisp.dir/cmake_clean.cmake
.PHONY : service_client_server/CMakeFiles/service_client_server_genlisp.dir/clean

service_client_server/CMakeFiles/service_client_server_genlisp.dir/depend:
	cd /home/anhtat/my_control/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anhtat/my_control/src /home/anhtat/my_control/src/service_client_server /home/anhtat/my_control/build /home/anhtat/my_control/build/service_client_server /home/anhtat/my_control/build/service_client_server/CMakeFiles/service_client_server_genlisp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : service_client_server/CMakeFiles/service_client_server_genlisp.dir/depend

