cmake_minimum_required(VERSION 3.3)
project(mipt_oop)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 1.cpp 2.cpp 3.cpp 4.cpp 5.cpp)
add_executable(mipt_oop ${SOURCE_FILES} 1.cpp 2.cpp 3.cpp)