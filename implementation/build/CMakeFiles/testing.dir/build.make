# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /snap/cmake/1381/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1381/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nataliechmura/work/rotation_nation/implementation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nataliechmura/work/rotation_nation/implementation/build

# Include any dependencies generated for this target.
include CMakeFiles/testing.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/testing.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/testing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testing.dir/flags.make

CMakeFiles/testing.dir/hashMap/tests/main.c.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/hashMap/tests/main.c.o: /home/nataliechmura/work/rotation_nation/implementation/hashMap/tests/main.c
CMakeFiles/testing.dir/hashMap/tests/main.c.o: CMakeFiles/testing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/nataliechmura/work/rotation_nation/implementation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/testing.dir/hashMap/tests/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/testing.dir/hashMap/tests/main.c.o -MF CMakeFiles/testing.dir/hashMap/tests/main.c.o.d -o CMakeFiles/testing.dir/hashMap/tests/main.c.o -c /home/nataliechmura/work/rotation_nation/implementation/hashMap/tests/main.c

CMakeFiles/testing.dir/hashMap/tests/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/testing.dir/hashMap/tests/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nataliechmura/work/rotation_nation/implementation/hashMap/tests/main.c > CMakeFiles/testing.dir/hashMap/tests/main.c.i

CMakeFiles/testing.dir/hashMap/tests/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/testing.dir/hashMap/tests/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nataliechmura/work/rotation_nation/implementation/hashMap/tests/main.c -o CMakeFiles/testing.dir/hashMap/tests/main.c.s

CMakeFiles/testing.dir/hashMap/hashMap.c.o: CMakeFiles/testing.dir/flags.make
CMakeFiles/testing.dir/hashMap/hashMap.c.o: /home/nataliechmura/work/rotation_nation/implementation/hashMap/hashMap.c
CMakeFiles/testing.dir/hashMap/hashMap.c.o: CMakeFiles/testing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/nataliechmura/work/rotation_nation/implementation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/testing.dir/hashMap/hashMap.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/testing.dir/hashMap/hashMap.c.o -MF CMakeFiles/testing.dir/hashMap/hashMap.c.o.d -o CMakeFiles/testing.dir/hashMap/hashMap.c.o -c /home/nataliechmura/work/rotation_nation/implementation/hashMap/hashMap.c

CMakeFiles/testing.dir/hashMap/hashMap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/testing.dir/hashMap/hashMap.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nataliechmura/work/rotation_nation/implementation/hashMap/hashMap.c > CMakeFiles/testing.dir/hashMap/hashMap.c.i

CMakeFiles/testing.dir/hashMap/hashMap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/testing.dir/hashMap/hashMap.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nataliechmura/work/rotation_nation/implementation/hashMap/hashMap.c -o CMakeFiles/testing.dir/hashMap/hashMap.c.s

# Object files for target testing
testing_OBJECTS = \
"CMakeFiles/testing.dir/hashMap/tests/main.c.o" \
"CMakeFiles/testing.dir/hashMap/hashMap.c.o"

# External object files for target testing
testing_EXTERNAL_OBJECTS =

testing: CMakeFiles/testing.dir/hashMap/tests/main.c.o
testing: CMakeFiles/testing.dir/hashMap/hashMap.c.o
testing: CMakeFiles/testing.dir/build.make
testing: CMakeFiles/testing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/nataliechmura/work/rotation_nation/implementation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable testing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testing.dir/build: testing
.PHONY : CMakeFiles/testing.dir/build

CMakeFiles/testing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testing.dir/clean

CMakeFiles/testing.dir/depend:
	cd /home/nataliechmura/work/rotation_nation/implementation/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nataliechmura/work/rotation_nation/implementation /home/nataliechmura/work/rotation_nation/implementation /home/nataliechmura/work/rotation_nation/implementation/build /home/nataliechmura/work/rotation_nation/implementation/build /home/nataliechmura/work/rotation_nation/implementation/build/CMakeFiles/testing.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/testing.dir/depend

