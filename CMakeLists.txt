cmake_minimum_required(VERSION 3.27)
project(StudyCPPAndVulkanRendering)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# add executions
add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES}
        "src/9. Strings/Lesson60_StringBuilder.cpp"
        "src/9. Strings/Lesson60_StringBuilder.h"
        "src/9. Strings/Lesson61_CharOperations.cpp"
        "src/9. Strings/Lesson61_CharOperations.h"
        "src/9. Strings/Lesson62_StringView.cpp"
        "src/9. Strings/Lesson62_StringView.h"
        "src/10. Movement Semantics/Lesson63_LRValue.cpp"
        "src/10. Movement Semantics/Lesson63_LRValue.h")

# fix clion shitty file creator
# add_library(CLionLib ${HEADERS} ${SOURCES})
