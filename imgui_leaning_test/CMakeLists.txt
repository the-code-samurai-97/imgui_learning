cmake_minimum_required(VERSION 3.5)
project(imgui_learning C CXX)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DVK_PROTOTYPES")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DVK_PROTOTYPES")

# GLFW
find_package(PkgConfig REQUIRED)
find_package(yaml-cpp REQUIRED)
pkg_check_modules(GLFW REQUIRED glfw3)
find_package(Vulkan REQUIRED)
message(${Vulkan_LIBRARY})
include_directories(${YAML_INCLUDE_DIRS})
set(IMGUI_DIR imgui/)
file(GLOB sources ${IMGUI_DIR}/*.cpp)

add_executable(imgui_learning main.cpp ${sources} yaml_reader.cpp yaml_reader.h)
target_link_libraries(imgui_learning ${Vulkan_LIBRARY} glfw yaml-cpp )#/usr/lib/x86_64-linux-gnu/libyaml-cpp.so.0.6)
