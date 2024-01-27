cmake_minimum_required(VERSION 3.27)
project(StudyCPPAndVulkanRendering)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# add executions
add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES}
        "src/8. Containers/Lesson42_Arrays.cpp"
        "src/8. Containers/Lesson42_Arrays.h"
        "src/8. Containers/Lesson45_List.h")

# fix clion shitty file creator
add_library(CLionLib ${HEADERS} ${SOURCES}
        "src/8. Containers/Lesson44_Iterators.cpp"
        "src/8. Containers/Lesson44_Iterators.h"
        "src/8. Containers/Lesson45_List.cpp"
        "src/8. Containers/Lesson45_List.h"
        "src/8. Containers/Lesson46_ForwardList.cpp"
        "src/8. Containers/Lesson46_ForwardList.h"
        "src/8. Containers/Lesson47_Deque.cpp"
        "src/8. Containers/Lesson47_Deque.h"
        "src/8. Containers/Lesson48_Stack.cpp"
        "src/8. Containers/Lesson48_Stack.h"
        "src/8. Containers/Lesson49_Queue.cpp"
        "src/8. Containers/Lesson49_Queue.h"
        "src/8. Containers/Lesson50_PriorityQueue.cpp"
        "src/8. Containers/Lesson50_PriorityQueue.h"
        "src/8. Containers/Lesson51_Set.cpp"
        "src/8. Containers/Lesson51_Set.h"
        "src/8. Containers/Lesson52_Map.cpp"
        "src/8. Containers/Lesson52_Map.h"
        "src/8. Containers/Lesson53_UnorderedSet.cpp"
        "src/8. Containers/Lesson53_UnorderedSet.h"
        "src/8. Containers/Lesson54_UnorderedMap.cpp"
        "src/8. Containers/Lesson54_UnorderedMap.h"
        "src/8. Containers/Lesson55_Span.cpp"
        "src/8. Containers/Lesson55_Span.h")
