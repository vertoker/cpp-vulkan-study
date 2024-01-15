//
// Created by vertog on 15.01.2024.
//

#include <iostream>
#include "Lesson10_PointersOperations.h"

void Lesson10_PointersOperations::main() {
    int a = 10;
    int b = 10;

    // Address Assign
    int* pa = &a; // assign is &

    std::cout << a << std::endl;
    std::cout << *pa << std::endl;

    // Address Dereference
    *pa = 25; // dereference is *

    std::cout << *pa << std::endl;

    // pointer of pointer
    int** ppa = &pa;

    std::cout << a << std::endl;
    std::cout << pa << std::endl;
    std::cout << ppa << std::endl;
    std::cout << **ppa << std::endl;

    // Reference to pointer
    int*& pRef = pa; // Store reference to pointer
    pRef = &a; // through ref you can assign address to pointer
    std::cout << *pa << std::endl;
    *pRef = 70; // you can use reference as a full customizable pointer
    std::cout << a << std::endl;

    // Pointer addresses
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << &pa << std::endl;

    // Operators
    pa  = &a;
    int *pb = &b;

    if (pa > pb) std::cout << "pa (" << pa << ") > pb ("<< pb << ")" << std::endl;
    else if (pa < pb) std::cout << "pa (" << pa << ") < pb ("<< pb << ")" << std::endl;
    else std::cout << "pa (" << pa << ") == pb ("<< pb << ")" << std::endl;

    // Type conversion
    char c {'N'};
    char* pc {&c}; // pointer on symbol

    // This shit can break all of your code if you do incorrect casting
    // It's unsafe, remember that
    int* pd {(int*)pc};   // pointer on integer
    void* pv {(void*)pc}; // pointer on void

    std::cout << "pc=" << pc << std::endl;
    std::cout << "pv=" << pv << std::endl;
    std::cout << "pd=" << pd << std::endl;
}
