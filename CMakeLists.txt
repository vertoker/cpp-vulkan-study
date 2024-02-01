cmake_minimum_required(VERSION 3.27)
project(StudyCPPAndVulkanRendering)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# add executions
add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES}
        "src/11. Functions/Lesson66_Functions.cpp"
        "src/11. Functions/Lesson66_Functions.h"
        "src/11. Functions/Lesson67_Lambda.cpp"
        "src/11. Functions/Lesson67_Lambda.h"
        "src/12. Algorithms/Lesson68_Algorithms.cpp"
        "src/12. Algorithms/Lesson68_Algorithms.h")

# fix clion shitty file creator
# add_library(CLionLib ${HEADERS} ${SOURCES})
