cmake_minimum_required(VERSION 3.16)

project(viikkokoe2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikkokoe2
viikkokoe2.cpp
MyClass.cpp
 "Apartment.h" "Vehicle.h")