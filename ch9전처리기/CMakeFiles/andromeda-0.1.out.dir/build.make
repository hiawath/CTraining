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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /mnt/d/CTraining/ch9전처리기

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/CTraining/ch9전처리기

# Include any dependencies generated for this target.
include CMakeFiles/andromeda-0.1.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/andromeda-0.1.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/andromeda-0.1.out.dir/flags.make

CMakeFiles/andromeda-0.1.out.dir/main.c.o: CMakeFiles/andromeda-0.1.out.dir/flags.make
CMakeFiles/andromeda-0.1.out.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CTraining/ch9전처리기/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/andromeda-0.1.out.dir/main.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/andromeda-0.1.out.dir/main.c.o   -c /mnt/d/CTraining/ch9전처리기/main.c

CMakeFiles/andromeda-0.1.out.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/andromeda-0.1.out.dir/main.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/CTraining/ch9전처리기/main.c > CMakeFiles/andromeda-0.1.out.dir/main.c.i

CMakeFiles/andromeda-0.1.out.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/andromeda-0.1.out.dir/main.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/CTraining/ch9전처리기/main.c -o CMakeFiles/andromeda-0.1.out.dir/main.c.s

CMakeFiles/andromeda-0.1.out.dir/drawbox.c.o: CMakeFiles/andromeda-0.1.out.dir/flags.make
CMakeFiles/andromeda-0.1.out.dir/drawbox.c.o: drawbox.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CTraining/ch9전처리기/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/andromeda-0.1.out.dir/drawbox.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/andromeda-0.1.out.dir/drawbox.c.o   -c /mnt/d/CTraining/ch9전처리기/drawbox.c

CMakeFiles/andromeda-0.1.out.dir/drawbox.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/andromeda-0.1.out.dir/drawbox.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/CTraining/ch9전처리기/drawbox.c > CMakeFiles/andromeda-0.1.out.dir/drawbox.c.i

CMakeFiles/andromeda-0.1.out.dir/drawbox.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/andromeda-0.1.out.dir/drawbox.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/CTraining/ch9전처리기/drawbox.c -o CMakeFiles/andromeda-0.1.out.dir/drawbox.c.s

CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.o: CMakeFiles/andromeda-0.1.out.dir/flags.make
CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.o: drawbox3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CTraining/ch9전처리기/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.o   -c /mnt/d/CTraining/ch9전처리기/drawbox3.c

CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/CTraining/ch9전처리기/drawbox3.c > CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.i

CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/CTraining/ch9전처리기/drawbox3.c -o CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.s

# Object files for target andromeda-0.1.out
andromeda__0_1_out_OBJECTS = \
"CMakeFiles/andromeda-0.1.out.dir/main.c.o" \
"CMakeFiles/andromeda-0.1.out.dir/drawbox.c.o" \
"CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.o"

# External object files for target andromeda-0.1.out
andromeda__0_1_out_EXTERNAL_OBJECTS =

Debug/andromeda-0.1.out: CMakeFiles/andromeda-0.1.out.dir/main.c.o
Debug/andromeda-0.1.out: CMakeFiles/andromeda-0.1.out.dir/drawbox.c.o
Debug/andromeda-0.1.out: CMakeFiles/andromeda-0.1.out.dir/drawbox3.c.o
Debug/andromeda-0.1.out: CMakeFiles/andromeda-0.1.out.dir/build.make
Debug/andromeda-0.1.out: CMakeFiles/andromeda-0.1.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/CTraining/ch9전처리기/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Debug/andromeda-0.1.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/andromeda-0.1.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/andromeda-0.1.out.dir/build: Debug/andromeda-0.1.out

.PHONY : CMakeFiles/andromeda-0.1.out.dir/build

CMakeFiles/andromeda-0.1.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/andromeda-0.1.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/andromeda-0.1.out.dir/clean

CMakeFiles/andromeda-0.1.out.dir/depend:
	cd /mnt/d/CTraining/ch9전처리기 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/CTraining/ch9전처리기 /mnt/d/CTraining/ch9전처리기 /mnt/d/CTraining/ch9전처리기 /mnt/d/CTraining/ch9전처리기 /mnt/d/CTraining/ch9전처리기/CMakeFiles/andromeda-0.1.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/andromeda-0.1.out.dir/depend

