# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CXXLibs\FileManage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CXXLibs\FileManage\build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test1.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test1.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test1.dir/flags.make

tests/CMakeFiles/test1.dir/test1.cpp.obj: tests/CMakeFiles/test1.dir/flags.make
tests/CMakeFiles/test1.dir/test1.cpp.obj: tests/CMakeFiles/test1.dir/includes_CXX.rsp
tests/CMakeFiles/test1.dir/test1.cpp.obj: C:/CXXLibs/FileManage/tests/test1.cpp
tests/CMakeFiles/test1.dir/test1.cpp.obj: tests/CMakeFiles/test1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\CXXLibs\FileManage\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test1.dir/test1.cpp.obj"
	cd /d C:\CXXLibs\FileManage\build\tests && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test1.dir/test1.cpp.obj -MF CMakeFiles\test1.dir\test1.cpp.obj.d -o CMakeFiles\test1.dir\test1.cpp.obj -c C:\CXXLibs\FileManage\tests\test1.cpp

tests/CMakeFiles/test1.dir/test1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test1.dir/test1.cpp.i"
	cd /d C:\CXXLibs\FileManage\build\tests && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CXXLibs\FileManage\tests\test1.cpp > CMakeFiles\test1.dir\test1.cpp.i

tests/CMakeFiles/test1.dir/test1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test1.dir/test1.cpp.s"
	cd /d C:\CXXLibs\FileManage\build\tests && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CXXLibs\FileManage\tests\test1.cpp -o CMakeFiles\test1.dir\test1.cpp.s

# Object files for target test1
test1_OBJECTS = \
"CMakeFiles/test1.dir/test1.cpp.obj"

# External object files for target test1
test1_EXTERNAL_OBJECTS =

tests/test1.exe: tests/CMakeFiles/test1.dir/test1.cpp.obj
tests/test1.exe: tests/CMakeFiles/test1.dir/build.make
tests/test1.exe: tests/CMakeFiles/test1.dir/compiler_depend.ts
tests/test1.exe: libFileManage.a
tests/test1.exe: tests/CMakeFiles/test1.dir/linkLibs.rsp
tests/test1.exe: tests/CMakeFiles/test1.dir/objects1.rsp
tests/test1.exe: tests/CMakeFiles/test1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\CXXLibs\FileManage\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test1.exe"
	cd /d C:\CXXLibs\FileManage\build\tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test1.dir/build: tests/test1.exe
.PHONY : tests/CMakeFiles/test1.dir/build

tests/CMakeFiles/test1.dir/clean:
	cd /d C:\CXXLibs\FileManage\build\tests && $(CMAKE_COMMAND) -P CMakeFiles\test1.dir\cmake_clean.cmake
.PHONY : tests/CMakeFiles/test1.dir/clean

tests/CMakeFiles/test1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CXXLibs\FileManage C:\CXXLibs\FileManage\tests C:\CXXLibs\FileManage\build C:\CXXLibs\FileManage\build\tests C:\CXXLibs\FileManage\build\tests\CMakeFiles\test1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/test1.dir/depend

