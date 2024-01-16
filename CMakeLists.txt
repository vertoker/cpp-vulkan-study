cmake_minimum_required(VERSION 3.27)
project(StudyCPPAndVulkanRendering)

set(CMAKE_CXX_STANDARD 17)

add_executable(StudyCPPAndVulkanRendering main.cpp
        Lessons.h
        "1. Basics/Lesson1_DataTypes.cpp"
        "1. Basics/Lesson1_DataTypes.h"
        "1. Basics/Lesson2_Using.cpp"
        "1. Basics/Lesson2_Using.h"
        "1. Basics/Lesson3_Operations.cpp"
        "1. Basics/Lesson3_Operations.h"
        "1. Basics/Lesson4_TypesCast.cpp"
        "1. Basics/Lesson4_TypesCast.h"
        "1. Basics/Lesson5_Constructions.cpp"
        "1. Basics/Lesson5_Constructions.h"
        "1. Basics/Lesson6_Pointers.cpp"
        "1. Basics/Lesson6_Pointers.h"
        "1. Basics/Lessons7_Arrays.cpp"
        "1. Basics/Lessons7_Arrays.h"
        "1. Basics/Lessons8_Strings.cpp"
        "1. Basics/Lessons8_Strings.h"
        "2. Pointers/Lesson9_PointersAdvanced.cpp"
        "2. Pointers/Lesson9_PointersAdvanced.h"
        "2. Pointers/Lesson10_PointersOperations.cpp"
        "2. Pointers/Lesson10_PointersOperations.h"
        "2. Pointers/Lesson11_PointersMath.cpp"
        "2. Pointers/Lesson11_PointersMath.h"
        "2. Pointers/Lesson12_PointersArrays.cpp"
        "2. Pointers/Lesson12_PointersArrays.h"
        "3. Functions/Lesson13_FunctionsBasics.cpp"
        "3. Functions/Lesson13_FunctionsBasics.h"
        "3. Functions/Lesson14_FunctionsParameters.cpp"
        "3. Functions/Lesson14_FunctionsParameters.h"
        "3. Functions/Lesson15_FunctionsReturn.cpp"
        "3. Functions/Lesson15_FunctionsReturn.h"
        "3. Functions/Lesson16_FunctionsArrays.cpp"
        "3. Functions/Lesson16_FunctionsArrays.h"
)
