cmake_minimum_required(VERSION 3.16)

project(h2a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h2a
h2a.cpp
Car.cpp
Rectangle.cpp
Student.cpp
)