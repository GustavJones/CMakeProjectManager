cmake_minimum_required(VERSION 3.5)
project(CMakeProjectManager VERSION 0.1)

add_subdirectory(external)

file(GLOB SOURCES "src/*.cpp")
file(GLOB INCLUDES "include/*.h")
file(GLOB FILEMANAGELIB "external/FileManage/build/libFileManage.a")

add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDES})

# Include Dirs
target_include_directories(${PROJECT_NAME} PRIVATE "include")
target_include_directories(${PROJECT_NAME} PRIVATE "external/wxWidgets/include")
target_include_directories(${PROJECT_NAME} PRIVATE "build_${CMAKE_BUILD_TYPE}/external/wxWidgets/lib/gcc_x64_dll/mswu")
target_include_directories(${PROJECT_NAME} PRIVATE "external/FileManage/include")

# Lib Linking
target_link_libraries(${PROJECT_NAME} PRIVATE wxcore wxbase)
target_link_libraries(${PROJECT_NAME} PRIVATE ${FILEMANAGELIB})

target_link_options(${PROJECT_NAME} PRIVATE -mwindows)