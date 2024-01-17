cmake_minimum_required(VERSION 3.27)
project(StudyCPPAndVulkanRendering)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES}
        "src/3. Functions/Lesson17_FunctionsOverload.cpp"
        "src/3. Functions/Lesson17_FunctionsOverload.h"
        "src/3. Functions/Lesson18_FunctionsRecursion.cpp"
        "src/3. Functions/Lesson18_FunctionsRecursion.h"
        "src/3. Functions/Lesson19_FunctionsPointers.cpp"
        "src/3. Functions/Lesson19_FunctionsPointers.h")
