cmake_minimum_required(VERSION 3.6)
project(AcceleratedCpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Input.cpp Input.h ChOne.cpp ChOne.h)
add_executable(AcceleratedCpp ${SOURCE_FILES})