cmake_minimum_required(VERSION 3.27)
project(StudyCPPAndVulkanRendering)

set(CMAKE_CXX_STANDARD 17)

add_executable(StudyCPPAndVulkanRendering main.cpp
        Lessons.h
        Basics/Lesson1_DataTypes.cpp
        Basics/Lesson1_DataTypes.h
        Basics/Lesson2_Using.cpp
        Basics/Lesson2_Using.h
        Basics/Lesson3_Operations.cpp
        Basics/Lesson3_Operations.h
        Basics/Lesson4_TypesCast.cpp
        Basics/Lesson4_TypesCast.h
        Basics/Lesson5_Constructions.cpp
        Basics/Lesson5_Constructions.h
        Basics/Lesson6_Pointers.cpp
        Basics/Lesson6_Pointers.h
        Basics/Lessons7_Arrays.cpp
        Basics/Lessons7_Arrays.h
        Basics/Lessons8_Strings.cpp
        Basics/Lessons8_Strings.h
        Pointers/Lesson9_PointersAdvanced.cpp
        Pointers/Lesson9_PointersAdvanced.h
        Pointers/Lesson10_PointersOperations.cpp
        Pointers/Lesson10_PointersOperations.h
        Pointers/Lesson11_PointersMath.cpp
        Pointers/Lesson11_PointersMath.h
        Pointers/Lesson12_PointersArrays.cpp
        Pointers/Lesson12_PointersArrays.h
)
