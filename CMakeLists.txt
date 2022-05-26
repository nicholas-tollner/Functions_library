cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 14)
project(functions)

set(SOURCE_FILES
        strings.cpp
        file.cpp)

add_library(functions ${SOURCE_FILES})
