# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/suspiciousfox/CLion/bin/clion-2018.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/suspiciousfox/CLion/bin/clion-2018.3.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/processor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/processor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/processor.dir/flags.make

CMakeFiles/processor.dir/src/processor.c.o: CMakeFiles/processor.dir/flags.make
CMakeFiles/processor.dir/src/processor.c.o: ../src/processor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/processor.dir/src/processor.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/processor.dir/src/processor.c.o   -c /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/src/processor.c

CMakeFiles/processor.dir/src/processor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/processor.dir/src/processor.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/src/processor.c > CMakeFiles/processor.dir/src/processor.c.i

CMakeFiles/processor.dir/src/processor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/processor.dir/src/processor.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/src/processor.c -o CMakeFiles/processor.dir/src/processor.c.s

CMakeFiles/processor.dir/src/processor_test.c.o: CMakeFiles/processor.dir/flags.make
CMakeFiles/processor.dir/src/processor_test.c.o: ../src/processor_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/processor.dir/src/processor_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/processor.dir/src/processor_test.c.o   -c /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/src/processor_test.c

CMakeFiles/processor.dir/src/processor_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/processor.dir/src/processor_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/src/processor_test.c > CMakeFiles/processor.dir/src/processor_test.c.i

CMakeFiles/processor.dir/src/processor_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/processor.dir/src/processor_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/src/processor_test.c -o CMakeFiles/processor.dir/src/processor_test.c.s

# Object files for target processor
processor_OBJECTS = \
"CMakeFiles/processor.dir/src/processor.c.o" \
"CMakeFiles/processor.dir/src/processor_test.c.o"

# External object files for target processor
processor_EXTERNAL_OBJECTS =

processor: CMakeFiles/processor.dir/src/processor.c.o
processor: CMakeFiles/processor.dir/src/processor_test.c.o
processor: CMakeFiles/processor.dir/build.make
processor: CMakeFiles/processor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable processor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/processor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/processor.dir/build: processor

.PHONY : CMakeFiles/processor.dir/build

CMakeFiles/processor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/processor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/processor.dir/clean

CMakeFiles/processor.dir/depend:
	cd /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2 /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2 /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/cmake-build-debug /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/cmake-build-debug /home/suspiciousfox/Desktop/COMP232/MatthewOlsenLab1_2/cmake-build-debug/CMakeFiles/processor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/processor.dir/depend
