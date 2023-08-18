cmake_minimum_required(VERSION 3.5)
project(FileManage VERSION 0.1)

set(BUILD_SHARED FALSE)

file(GLOB SOURCES CONFIGURE_DEPENDS "src/*.cpp")

if(BUILD_SHARED)
    add_library(${PROJECT_NAME} SHARED ${SOURCES})
    message(STATUS "Building Shared Libraries")
else()
    add_library(${PROJECT_NAME} STATIC ${SOURCES})
    message(STATUS "Building Static Libraries")
endif()

target_include_directories(${PROJECT_NAME} PRIVATE ./include)

add_subdirectory(tests)