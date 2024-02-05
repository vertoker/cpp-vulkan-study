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
        "src/12. Algorithms/Lesson68_Algorithms.h"
        "src/13. Streams/Lesson69_Streams.cpp"
        "src/13. Streams/Lesson69_Streams.h"
        "src/13. Streams/Lesson70_FileStreams.cpp"
        "src/13. Streams/Lesson70_FileStreams.h"
        "src/14. std/Lesson71_Math.cpp"
        "src/14. std/Lesson71_Math.h"
        "src/14. std/Lesson72_StringFormat.cpp"
        "src/14. std/Lesson72_StringFormat.h"
        "src/14. std/Lesson73_OptionalNullable.cpp"
        "src/14. std/Lesson73_OptionalNullable.h"
        "src/15. Idiomas/Lesson74_RAII.cpp"
        "src/15. Idiomas/Lesson74_RAII.h"
        "src/15. Idiomas/Lesson75_CopySwap.cpp"
        "src/15. Idiomas/Lesson75_CopySwap.h"
        "src/15. Idiomas/Lesson76_MoveSwap.cpp"
        "src/15. Idiomas/Lesson76_MoveSwap.h"
        src/LeetCode/Solution.cpp
        src/LeetCode/Solution.h)

# fix clion shitty file creator
# add_library(CLionLib ${HEADERS} ${SOURCES})
