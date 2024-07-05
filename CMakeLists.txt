cmake_minimum_required(VERSION 3.12)
project(cmake-tutorial)

set(CMAKE_CXX_STANDARD 11)

# v.1 
# https://stackoverflow.com/questions/3201154/automatically-add-all-files-in-a-folder-to-a-target-using-cmake

#file(GLOB cmake-tutorial CONFIGURE_DEPENDS "*.h" "*.cpp")

# v.2

#file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
#file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

#add_executable(cmake-tutorial ${HEADERS} ${SOURCES})

# v.3

file(GLOB SOURCES "*.h" "*.cpp")
add_executable(cmake-tutorial ${SOURCES})