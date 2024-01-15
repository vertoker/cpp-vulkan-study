//
// Created by vertog on 15.01.2024.
//

#include <iostream>
#include "Lesson9_PointersAdvanced.h"

void Lesson9_PointersAdvanced::main() {
    // * - pointer symbol
    // & - address symbol

    // * - setup for variable, which now store pointer to the variable
    // & - get address of the variable

    // data_types* name_pointer
    int* ptr = nullptr;
    std::cout << ptr << std::endl;

    int number = 25;
    ptr = &number;
    std::cout << number << std::endl;
    std::cout << ptr << std::endl;

    // & - get pointer of variable (up)
    // * - get variable of pointer (down)
    std::cout << &ptr << std::endl;
    std::cout << *ptr << std::endl;



    *ptr = 45;
    std::cout << *ptr << std::endl;

    const int a {10};
    const int b {45};
    // Data - immutable
    // Pointer - mutable
    const int *pa = nullptr;
    pa = &b;

    std::cout << "*pa = " << *pa << std::endl; // *pa = 45
    std::cout << "a = " << a << std::endl;     // a = 10

    int const*pa2 = &a;
    // Data - immutable
    // Pointer - immutable
}
