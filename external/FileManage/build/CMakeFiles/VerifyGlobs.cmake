# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.27
cmake_policy(SET CMP0009 NEW)

# TEST_SOURCES at tests/CMakeLists.txt:1 (file)
file(GLOB NEW_GLOB LIST_DIRECTORIES true "C:/CXXLibs/FileManage/tests/*.cpp")
set(OLD_GLOB
  "C:/CXXLibs/FileManage/tests/test1.cpp"
  "C:/CXXLibs/FileManage/tests/test2.cpp"
  "C:/CXXLibs/FileManage/tests/test3.cpp"
  "C:/CXXLibs/FileManage/tests/test4.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "C:/CXXLibs/FileManage/build/CMakeFiles/cmake.verify_globs")
endif()
