# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1__Creation_and_Traversal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1__Creation_and_Traversal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1__Creation_and_Traversal.dir/flags.make

CMakeFiles/1__Creation_and_Traversal.dir/main.c.obj: CMakeFiles/1__Creation_and_Traversal.dir/flags.make
CMakeFiles/1__Creation_and_Traversal.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/1__Creation_and_Traversal.dir/main.c.obj"
	C:\Users\adeel\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\1__Creation_and_Traversal.dir\main.c.obj -c "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\main.c"

CMakeFiles/1__Creation_and_Traversal.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1__Creation_and_Traversal.dir/main.c.i"
	C:\Users\adeel\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\main.c" > CMakeFiles\1__Creation_and_Traversal.dir\main.c.i

CMakeFiles/1__Creation_and_Traversal.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1__Creation_and_Traversal.dir/main.c.s"
	C:\Users\adeel\mingw\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\main.c" -o CMakeFiles\1__Creation_and_Traversal.dir\main.c.s

# Object files for target 1__Creation_and_Traversal
1__Creation_and_Traversal_OBJECTS = \
"CMakeFiles/1__Creation_and_Traversal.dir/main.c.obj"

# External object files for target 1__Creation_and_Traversal
1__Creation_and_Traversal_EXTERNAL_OBJECTS =

1__Creation_and_Traversal.exe: CMakeFiles/1__Creation_and_Traversal.dir/main.c.obj
1__Creation_and_Traversal.exe: CMakeFiles/1__Creation_and_Traversal.dir/build.make
1__Creation_and_Traversal.exe: CMakeFiles/1__Creation_and_Traversal.dir/linklibs.rsp
1__Creation_and_Traversal.exe: CMakeFiles/1__Creation_and_Traversal.dir/objects1.rsp
1__Creation_and_Traversal.exe: CMakeFiles/1__Creation_and_Traversal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 1__Creation_and_Traversal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1__Creation_and_Traversal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1__Creation_and_Traversal.dir/build: 1__Creation_and_Traversal.exe

.PHONY : CMakeFiles/1__Creation_and_Traversal.dir/build

CMakeFiles/1__Creation_and_Traversal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1__Creation_and_Traversal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1__Creation_and_Traversal.dir/clean

CMakeFiles/1__Creation_and_Traversal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal" "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal" "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\cmake-build-debug" "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\cmake-build-debug" "C:\Users\adeel\CLionProjects\DSA-Notes\10. Binary Trees\1. Creation and Traversal\cmake-build-debug\CMakeFiles\1__Creation_and_Traversal.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1__Creation_and_Traversal.dir/depend
