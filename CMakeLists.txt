# System
cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 14)

# Project
project(functions)
set(SOURCE_FILES src/strings.cpp src/file.cpp)

# Build
add_library(functions ${SOURCE_FILES})
