# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/build

# Include any dependencies generated for this target.
include CMakeFiles/fraction.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/fraction.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/fraction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fraction.dir/flags.make

CMakeFiles/fraction.dir/oppgave1/main.cpp.o: CMakeFiles/fraction.dir/flags.make
CMakeFiles/fraction.dir/oppgave1/main.cpp.o: ../oppgave1/main.cpp
CMakeFiles/fraction.dir/oppgave1/main.cpp.o: CMakeFiles/fraction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fraction.dir/oppgave1/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fraction.dir/oppgave1/main.cpp.o -MF CMakeFiles/fraction.dir/oppgave1/main.cpp.o.d -o CMakeFiles/fraction.dir/oppgave1/main.cpp.o -c /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/oppgave1/main.cpp

CMakeFiles/fraction.dir/oppgave1/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fraction.dir/oppgave1/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/oppgave1/main.cpp > CMakeFiles/fraction.dir/oppgave1/main.cpp.i

CMakeFiles/fraction.dir/oppgave1/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fraction.dir/oppgave1/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/oppgave1/main.cpp -o CMakeFiles/fraction.dir/oppgave1/main.cpp.s

CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o: CMakeFiles/fraction.dir/flags.make
CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o: ../oppgave1/fraction.cpp
CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o: CMakeFiles/fraction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o -MF CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o.d -o CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o -c /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/oppgave1/fraction.cpp

CMakeFiles/fraction.dir/oppgave1/fraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fraction.dir/oppgave1/fraction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/oppgave1/fraction.cpp > CMakeFiles/fraction.dir/oppgave1/fraction.cpp.i

CMakeFiles/fraction.dir/oppgave1/fraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fraction.dir/oppgave1/fraction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/oppgave1/fraction.cpp -o CMakeFiles/fraction.dir/oppgave1/fraction.cpp.s

# Object files for target fraction
fraction_OBJECTS = \
"CMakeFiles/fraction.dir/oppgave1/main.cpp.o" \
"CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o"

# External object files for target fraction
fraction_EXTERNAL_OBJECTS =

fraction: CMakeFiles/fraction.dir/oppgave1/main.cpp.o
fraction: CMakeFiles/fraction.dir/oppgave1/fraction.cpp.o
fraction: CMakeFiles/fraction.dir/build.make
fraction: CMakeFiles/fraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable fraction"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fraction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fraction.dir/build: fraction
.PHONY : CMakeFiles/fraction.dir/build

CMakeFiles/fraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fraction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fraction.dir/clean

CMakeFiles/fraction.dir/depend:
	cd /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7 /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7 /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/build /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/build /mnt/c/Users/Tomas/CLionProjects/Ovinger/Oving7/build/CMakeFiles/fraction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fraction.dir/depend

