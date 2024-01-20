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
        "src/3. Functions/Lesson19_FunctionsPointers.h"
        "src/4. Memory/Lesson20_MemoryBasics.cpp"
        "src/4. Memory/Lesson20_MemoryBasics.h"
        "src/4. Memory/Lesson21_UniquePtr.cpp"
        "src/4. Memory/Lesson21_UniquePtr.h"
        "src/4. Memory/Lesson22_SharedPtr.cpp"
        "src/4. Memory/Lesson22_SharedPtr.h"
        "src/5. OOP/Lesson23_Classes.cpp"
        "src/5. OOP/Lesson23_Classes.h"
        "src/5. OOP/Lesson24_Friends.cpp"
        "src/5. OOP/Lesson24_Friends.h"
        "src/5. OOP/Lesson25_Statics.cpp"
        "src/5. OOP/Lesson25_Statics.h"
        "src/5. OOP/Lesson26_Struct.cpp"
        "src/5. OOP/Lesson26_Struct.h"
        "src/5. OOP/Lesson27_Enum.cpp"
        "src/5. OOP/Lesson27_Enum.h"
        "src/5. OOP/Lesson28_Inheritance.cpp"
        "src/5. OOP/Lesson28_Inheritance.h"
        "src/5. OOP/Lesson29_MultipleIneritance.cpp"
        "src/5. OOP/Lesson29_MultipleIneritance.h"
        "src/5. OOP/Lesson30_OperatorsOverloading.cpp"
        "src/5. OOP/Lesson30_OperatorsOverloading.h"
        "src/5. OOP/Lesson31_Explicit.cpp"
        "src/5. OOP/Lesson31_Explicit.h"
        "src/5. OOP/Lesson32_Namespaces.cpp"
        "src/5. OOP/Lesson32_Namespaces.h"
        "src/5. OOP/Lesson33_NestedClass.cpp"
        "src/5. OOP/Lesson33_NestedClass.h")
