# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\SkillboxProjects\class1\ex2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\SkillboxProjects\class1\ex2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex2.dir/flags.make

CMakeFiles/ex2.dir/main.cpp.obj: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\SkillboxProjects\class1\ex2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ex2.dir\main.cpp.obj -c D:\SkillboxProjects\class1\ex2\main.cpp

CMakeFiles/ex2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\SkillboxProjects\class1\ex2\main.cpp > CMakeFiles\ex2.dir\main.cpp.i

CMakeFiles/ex2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\SkillboxProjects\class1\ex2\main.cpp -o CMakeFiles\ex2.dir\main.cpp.s

# Object files for target ex2
ex2_OBJECTS = \
"CMakeFiles/ex2.dir/main.cpp.obj"

# External object files for target ex2
ex2_EXTERNAL_OBJECTS =

ex2.exe: CMakeFiles/ex2.dir/main.cpp.obj
ex2.exe: CMakeFiles/ex2.dir/build.make
ex2.exe: CMakeFiles/ex2.dir/linklibs.rsp
ex2.exe: CMakeFiles/ex2.dir/objects1.rsp
ex2.exe: CMakeFiles/ex2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\SkillboxProjects\class1\ex2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex2.dir/build: ex2.exe
.PHONY : CMakeFiles/ex2.dir/build

CMakeFiles/ex2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex2.dir/clean

CMakeFiles/ex2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\SkillboxProjects\class1\ex2 D:\SkillboxProjects\class1\ex2 D:\SkillboxProjects\class1\ex2\cmake-build-debug D:\SkillboxProjects\class1\ex2\cmake-build-debug D:\SkillboxProjects\class1\ex2\cmake-build-debug\CMakeFiles\ex2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex2.dir/depend

