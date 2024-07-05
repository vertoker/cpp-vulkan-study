cmake_minimum_required(VERSION 3.12)
project(cmake-tutorial)

set(CMAKE_CXX_STANDARD 11)

# v.1

#file(GLOB SOURCES "src/*.h" "src/*.cpp" "src/test/*.h" "src/test/*.cpp")
#add_executable(cmake-tutorial ${SOURCES})

# v.2

file(GLOB_RECURSE SOURCES "src/*.h" "src/*.cpp")
add_executable(cmake-tutorial ${SOURCES})
