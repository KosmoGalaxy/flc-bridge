cmake_minimum_required(VERSION 3.13)
project(flc-bridge)

set(CMAKE_CXX_STANDARD 14)

include_directories(../include)

add_library(flc-bridge STATIC
        Host.cpp)