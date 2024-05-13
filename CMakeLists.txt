cmake_minimum_required(VERSION 3.26)
project(DynamicClassroom)

set(CMAKE_CXX_STANDARD 17)

add_executable(DynamicClassroom main.cpp
        functions.cpp
        functions.hpp
        StudentClass.cpp
        StudentClass.hpp)
