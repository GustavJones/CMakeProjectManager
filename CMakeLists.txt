cmake_minimum_required(VERSION 3.5)
project(CMakeProjectManager VERSION 1.0)

add_subdirectory(external)

file(GLOB SOURCES "src/*.cpp")
file(GLOB INCLUDES "include/*.h")
file(GLOB FILEMANAGELIB "external/FileManage/build/libFileManage.a")

add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDES} external/wxWidgets/include/wx/msw/wx.rc)

# Include Dirs
target_include_directories(${PROJECT_NAME} PRIVATE "include")
target_include_directories(${PROJECT_NAME} PRIVATE "external/wxWidgets/include")
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_BINARY_DIR}/external/wxWidgets/lib/gcc_x64_dll/mswu")
target_include_directories(${PROJECT_NAME} PRIVATE "external/FileManage/include")

# Lib Linking
target_link_libraries(${PROJECT_NAME} PRIVATE wxcore wxbase)
target_link_libraries(${PROJECT_NAME} PRIVATE ${FILEMANAGELIB})

target_link_options(${PROJECT_NAME} PRIVATE -mwindows)