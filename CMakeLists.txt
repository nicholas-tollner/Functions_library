# System
cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 14)

# Project
project(Functions_library)
include_directories(src)
set(source_files src/strings.cpp src/file.cpp)

# Build
add_library(Functions_library ${source_files})
