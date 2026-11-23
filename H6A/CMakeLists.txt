cmake_minimum_required(VERSION 3.16)

# Initialize project and enable C++ compiler
project(h6a LANGUAGES CXX)

# Locate Qt installation
set(CMAKE_PREFIX_PATH "C:/Qt/6.12.1/msvc2022_64")

# Enable Qt's Meta-Object Compiler
set(CMAKE_AUTOMOC ON)

# Find Qt Core
find_package(Qt6 REQUIRED COMPONENTS Core)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable
add_executable(h6a
	h6a.cpp
)

# Link Qt Core Library
target_link_libraries(h6a PRIVATE Qt6::Core)