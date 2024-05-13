cmake_minimum_required(VERSION 3.26)
project(DynamicClassroom)

set(CMAKE_CXX_STANDARD 17)

add_executable(DynamicClassroom main.cpp
        required.cpp
        required.hpp
        helper.cpp
        helper.hpp)
