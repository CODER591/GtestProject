# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD

# Include any dependencies generated for this target.
include src_test/CMakeFiles/test_solution.out.dir/depend.make

# Include the progress variables for this target.
include src_test/CMakeFiles/test_solution.out.dir/progress.make

# Include the compile flags for this target's objects.
include src_test/CMakeFiles/test_solution.out.dir/flags.make

src_test/CMakeFiles/test_solution.out.dir/main_test.cpp.o: src_test/CMakeFiles/test_solution.out.dir/flags.make
src_test/CMakeFiles/test_solution.out.dir/main_test.cpp.o: ../src_test/main_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src_test/CMakeFiles/test_solution.out.dir/main_test.cpp.o"
	cd /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/src_test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_solution.out.dir/main_test.cpp.o -c /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/src_test/main_test.cpp

src_test/CMakeFiles/test_solution.out.dir/main_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_solution.out.dir/main_test.cpp.i"
	cd /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/src_test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/src_test/main_test.cpp > CMakeFiles/test_solution.out.dir/main_test.cpp.i

src_test/CMakeFiles/test_solution.out.dir/main_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_solution.out.dir/main_test.cpp.s"
	cd /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/src_test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/src_test/main_test.cpp -o CMakeFiles/test_solution.out.dir/main_test.cpp.s

# Object files for target test_solution.out
test_solution_out_OBJECTS = \
"CMakeFiles/test_solution.out.dir/main_test.cpp.o"

# External object files for target test_solution.out
test_solution_out_EXTERNAL_OBJECTS =

src_test/test_solution.out: src_test/CMakeFiles/test_solution.out.dir/main_test.cpp.o
src_test/test_solution.out: src_test/CMakeFiles/test_solution.out.dir/build.make
src_test/test_solution.out: /usr/lib/x86_64-linux-gnu/libgtest.a
src_test/test_solution.out: src_test/CMakeFiles/test_solution.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_solution.out"
	cd /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/src_test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_solution.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src_test/CMakeFiles/test_solution.out.dir/build: src_test/test_solution.out

.PHONY : src_test/CMakeFiles/test_solution.out.dir/build

src_test/CMakeFiles/test_solution.out.dir/clean:
	cd /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/src_test && $(CMAKE_COMMAND) -P CMakeFiles/test_solution.out.dir/cmake_clean.cmake
.PHONY : src_test/CMakeFiles/test_solution.out.dir/clean

src_test/CMakeFiles/test_solution.out.dir/depend:
	cd /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1 /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/src_test /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/src_test /home/sdube/Desktop/GitHub/GtestProject/ArrAndStrings/1.1/BUILD/src_test/CMakeFiles/test_solution.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src_test/CMakeFiles/test_solution.out.dir/depend

