//
// Created by vertog on 18.01.2024.
//

#include <iostream>
#include "Lesson20_MemoryBasics.h"

void Lesson20_MemoryBasics::main() {
    int *ptr1 = new int {5};
    std::cout << "*ptr1 = " << *ptr1 << std::endl;
    delete ptr1;
    ptr1 = nullptr; // better do that because you don't want "dangling pointer"

    // here's didn't work properly
    /*int ptr2 = 5;
    std::cout << "ptr2 = " << ptr2 << std::endl;
    delete &ptr2;*/
    // It won't print further because in a correct link deleted,
    // You can't delete not pointer item

    int *ptr3 = new int {5};
    std::cout << "*ptr3 = " << *ptr3 << std::endl;
    delete ptr3;

    size_t size = 10;
    int *ptr4 = new int[size];// without them just call malloc
    int *ptr5 = new int[size] {};// brackets are important, its fill array with data zeros

    for (auto i = 0; i < size; i++)
        std::cout << ptr4[i] << "\t";// can be random numbers
    std::cout << std::endl;
    for (auto i = 0; i < size; i++)
        std::cout << ptr5[i] << "\t";// zeros
    std::cout << std::endl;

    delete[] ptr4;
    delete[] ptr5;


    size_t size2 = 5;

    int **ptr6 = new int*[size2] {}; // malloc for an array pointer (not the arrays below)
    for (auto i = 0; i < size2; i++)
        ptr6[i] = new int[size] { }; // with initialization

    std::cout << std::endl;
    for (int i = 0; i < size2; ++i) {
        for (int j = 0; j < size; ++j)
            std::cout << ptr6[i][j] << "\t"; // zeros
        std::cout << std::endl;
    }

    for (auto i = 0; i < size2; ++i)
        delete[] ptr6[i];
    delete[] ptr6;


    int **ptr7 = new int*[size2] {};
    for (auto i = 0; i < size2; i++)
        ptr7[i] = new int[size]; // no clearance

    std::cout << std::endl;
    for (int i = 0; i < size2; ++i) {
        for (int j = 0; j < size; ++j)
            std::cout << ptr7[i][j] << "\t"; // can be random numbers
        std::cout << std::endl;
    }

    for (auto i = 0; i < size2; ++i)
        delete[] ptr7[i];
    delete[] ptr7;

    const size_t constSize2 = 5;
    auto (*ptr8)[constSize2] = new int[size][constSize2] { };
    //auto (*ptr8)[constSize2] = new int[size][constSize2]; // rule with brackets works here too

    std::cout << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < constSize2; ++j)
            std::cout << ptr8[i][j] << "\t"; // can be random numbers
        std::cout << std::endl;
    }

    delete[] ptr8;
}
