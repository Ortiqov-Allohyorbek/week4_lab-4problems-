cmake_minimum_required(VERSION 4.3)
project(untitled)

set(CMAKE_CXX_STANDARD 20)
add_executable(untitled Week4.cpp)
add_executable(untitled problem5.cpp)
add_executable(untitled problem2.cpp)
add_executable(untitled problem4.cpp)
add_library(untitled STATIC library.cpp
        main.cpp
        Week4.h
        Week4.h
        problem2.cpp
        problem4.cpp
        problem5.cpp
        problem3.cpp)
