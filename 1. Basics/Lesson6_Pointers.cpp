//
// Created by vertog on 14.01.2024.
//

#include <iostream>
#include "Lesson6_Pointers.h"

void Lesson6_Pointers::main() {
    int number = 5;
    int &refNumber = number;
    // You can't do like this
    // int &refNumber;
    // int &refNumber = 10;
    // Only pointers, only hardcore

    std::cout << refNumber << std::endl; // 5
    refNumber = 20;
    std::cout << number << std::endl;   // 20

    const int &refNumber2 {number};
    // You can't change const pointer
    // refNumber = 20;
    // But can variable

    number = 30;
    std::cout << number << std::endl;   // 30

    int numbers[] {1, 2, 3, 4, 5};

    // Standard readonly foreach with element copying
    for (int n : numbers)
    {
        n = n * n;
        std::cout << n << "\t";
    }
    std::cout << std::endl;

    // Until we use pointers, now they are read/write and not copying
    for (int& n : numbers)
    {
        n = n * n;
        std::cout << n << "\t";
    }
    std::cout << std::endl;

    // Or make them constant
    for (const int& n : numbers)
    {
        //n = n * n;
        std::cout << n << "\t";
    }
    std::cout << std::endl;
    // That variant more efficient because we use pointers and
    // not copy elements from array
}
