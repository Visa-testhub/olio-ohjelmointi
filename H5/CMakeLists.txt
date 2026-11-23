cmake_minimum_required(VERSION 3.16)

project(h5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h5
h5.cpp
ClassA1.cpp
ClassA2.cpp
ClassB.cpp
)