# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = C:\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CXXLibs\FileManage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CXXLibs\FileManage\build

# Include any dependencies generated for this target.
include CMakeFiles/FileManage.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FileManage.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FileManage.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FileManage.dir/flags.make

CMakeFiles/FileManage.dir/src/File.cpp.obj: CMakeFiles/FileManage.dir/flags.make
CMakeFiles/FileManage.dir/src/File.cpp.obj: CMakeFiles/FileManage.dir/includes_CXX.rsp
CMakeFiles/FileManage.dir/src/File.cpp.obj: C:/CXXLibs/FileManage/src/File.cpp
CMakeFiles/FileManage.dir/src/File.cpp.obj: CMakeFiles/FileManage.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CXXLibs\FileManage\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FileManage.dir/src/File.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManage.dir/src/File.cpp.obj -MF CMakeFiles\FileManage.dir\src\File.cpp.obj.d -o CMakeFiles\FileManage.dir\src\File.cpp.obj -c C:\CXXLibs\FileManage\src\File.cpp

CMakeFiles/FileManage.dir/src/File.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileManage.dir/src/File.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CXXLibs\FileManage\src\File.cpp > CMakeFiles\FileManage.dir\src\File.cpp.i

CMakeFiles/FileManage.dir/src/File.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileManage.dir/src/File.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CXXLibs\FileManage\src\File.cpp -o CMakeFiles\FileManage.dir\src\File.cpp.s

CMakeFiles/FileManage.dir/src/Folder.cpp.obj: CMakeFiles/FileManage.dir/flags.make
CMakeFiles/FileManage.dir/src/Folder.cpp.obj: CMakeFiles/FileManage.dir/includes_CXX.rsp
CMakeFiles/FileManage.dir/src/Folder.cpp.obj: C:/CXXLibs/FileManage/src/Folder.cpp
CMakeFiles/FileManage.dir/src/Folder.cpp.obj: CMakeFiles/FileManage.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CXXLibs\FileManage\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FileManage.dir/src/Folder.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManage.dir/src/Folder.cpp.obj -MF CMakeFiles\FileManage.dir\src\Folder.cpp.obj.d -o CMakeFiles\FileManage.dir\src\Folder.cpp.obj -c C:\CXXLibs\FileManage\src\Folder.cpp

CMakeFiles/FileManage.dir/src/Folder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileManage.dir/src/Folder.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CXXLibs\FileManage\src\Folder.cpp > CMakeFiles\FileManage.dir\src\Folder.cpp.i

CMakeFiles/FileManage.dir/src/Folder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileManage.dir/src/Folder.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CXXLibs\FileManage\src\Folder.cpp -o CMakeFiles\FileManage.dir\src\Folder.cpp.s

CMakeFiles/FileManage.dir/src/Path.cpp.obj: CMakeFiles/FileManage.dir/flags.make
CMakeFiles/FileManage.dir/src/Path.cpp.obj: CMakeFiles/FileManage.dir/includes_CXX.rsp
CMakeFiles/FileManage.dir/src/Path.cpp.obj: C:/CXXLibs/FileManage/src/Path.cpp
CMakeFiles/FileManage.dir/src/Path.cpp.obj: CMakeFiles/FileManage.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CXXLibs\FileManage\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FileManage.dir/src/Path.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileManage.dir/src/Path.cpp.obj -MF CMakeFiles\FileManage.dir\src\Path.cpp.obj.d -o CMakeFiles\FileManage.dir\src\Path.cpp.obj -c C:\CXXLibs\FileManage\src\Path.cpp

CMakeFiles/FileManage.dir/src/Path.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileManage.dir/src/Path.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CXXLibs\FileManage\src\Path.cpp > CMakeFiles\FileManage.dir\src\Path.cpp.i

CMakeFiles/FileManage.dir/src/Path.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileManage.dir/src/Path.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CXXLibs\FileManage\src\Path.cpp -o CMakeFiles\FileManage.dir\src\Path.cpp.s

# Object files for target FileManage
FileManage_OBJECTS = \
"CMakeFiles/FileManage.dir/src/File.cpp.obj" \
"CMakeFiles/FileManage.dir/src/Folder.cpp.obj" \
"CMakeFiles/FileManage.dir/src/Path.cpp.obj"

# External object files for target FileManage
FileManage_EXTERNAL_OBJECTS =

libFileManage.a: CMakeFiles/FileManage.dir/src/File.cpp.obj
libFileManage.a: CMakeFiles/FileManage.dir/src/Folder.cpp.obj
libFileManage.a: CMakeFiles/FileManage.dir/src/Path.cpp.obj
libFileManage.a: CMakeFiles/FileManage.dir/build.make
libFileManage.a: CMakeFiles/FileManage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CXXLibs\FileManage\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libFileManage.a"
	$(CMAKE_COMMAND) -P CMakeFiles\FileManage.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FileManage.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FileManage.dir/build: libFileManage.a
.PHONY : CMakeFiles/FileManage.dir/build

CMakeFiles/FileManage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FileManage.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FileManage.dir/clean

CMakeFiles/FileManage.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CXXLibs\FileManage C:\CXXLibs\FileManage C:\CXXLibs\FileManage\build C:\CXXLibs\FileManage\build C:\CXXLibs\FileManage\build\CMakeFiles\FileManage.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FileManage.dir/depend

