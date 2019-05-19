cmake_minimum_required(VERSION 3.13)
project(flc-bridge-dev)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_subdirectory(src)
add_executable(flc-bridge-dev dev/main.cpp)
target_link_libraries(flc-bridge-dev flc-bridge)