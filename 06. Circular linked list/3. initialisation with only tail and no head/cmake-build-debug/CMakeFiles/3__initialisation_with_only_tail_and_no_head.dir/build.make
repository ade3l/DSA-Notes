# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/flags.make

CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.obj: CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/flags.make
CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.obj"
	C:\Users\adeel\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\3__initialisation_with_only_tail_and_no_head.dir\main.c.obj   -c "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\main.c"

CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.i"
	C:\Users\adeel\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\main.c" > CMakeFiles\3__initialisation_with_only_tail_and_no_head.dir\main.c.i

CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.s"
	C:\Users\adeel\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\main.c" -o CMakeFiles\3__initialisation_with_only_tail_and_no_head.dir\main.c.s

# Object files for target 3__initialisation_with_only_tail_and_no_head
3__initialisation_with_only_tail_and_no_head_OBJECTS = \
"CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.obj"

# External object files for target 3__initialisation_with_only_tail_and_no_head
3__initialisation_with_only_tail_and_no_head_EXTERNAL_OBJECTS =

3__initialisation_with_only_tail_and_no_head.exe: CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/main.c.obj
3__initialisation_with_only_tail_and_no_head.exe: CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/build.make
3__initialisation_with_only_tail_and_no_head.exe: CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/linklibs.rsp
3__initialisation_with_only_tail_and_no_head.exe: CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/objects1.rsp
3__initialisation_with_only_tail_and_no_head.exe: CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 3__initialisation_with_only_tail_and_no_head.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\3__initialisation_with_only_tail_and_no_head.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/build: 3__initialisation_with_only_tail_and_no_head.exe

.PHONY : CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/build

CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\3__initialisation_with_only_tail_and_no_head.dir\cmake_clean.cmake
.PHONY : CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/clean

CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head" "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head" "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\cmake-build-debug" "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\cmake-build-debug" "C:\Users\adeel\CLionProjects\DSA-Notes\6. Circular linked list\3. initialisation with only tail and no head\cmake-build-debug\CMakeFiles\3__initialisation_with_only_tail_and_no_head.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/3__initialisation_with_only_tail_and_no_head.dir/depend

