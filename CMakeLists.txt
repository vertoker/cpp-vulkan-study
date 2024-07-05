cmake_minimum_required(VERSION 3.10)
project(cmake-tutorial)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(cmake-tutorial main.cpp)