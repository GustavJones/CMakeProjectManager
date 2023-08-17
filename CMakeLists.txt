cmake_minimum_required(VERSION 3.5)
project(CMakeProjectManager VERSION 0.1)

file(GLOB SOURCES CONFIGURE_DEPENDS "src/*.cpp")
file(GLOB INCLUDES CONFIGURE_DEPENDS "include/*.h")
file(GLOB WXWIDGETSLIB CONFIGURE_DEPENDS "external/wxWidgets/lib/gcc_x64_dll/*.a")

add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDES})
target_include_directories(${PROJECT_NAME} PRIVATE include external/wxWidgets/include external/wxWidgets/lib/gcc_x64_dll/mswu)
target_link_libraries(${PROJECT_NAME} PRIVATE ${WXWIDGETSLIB})