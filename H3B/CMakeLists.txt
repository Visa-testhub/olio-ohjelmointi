cmake_minimum_required(VERSION 3.16)

project(h3b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h3b
h3b.cpp
Dog.cpp
Animal.cpp
)