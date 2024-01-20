//
// Created by vertog on 18.01.2024.
//

#include <memory>
#include <iostream>
#include "Lesson22_SharedPtr.h"

// shared_ptr it's opposite for unique_ptr, it can store multiple links for the one address
// shared_ptr has one important difference through standard ptr:
// it counts how many ptr addressing to the ptr (reference counting)
//

void Lesson22_SharedPtr::main() {
    //std::shared_ptr<int>; // can't define empty shared ptr
    auto ptr = std::make_shared<int>(22);
    std::cout << "address: " << ptr << std::endl;
    std::cout << "old value: " << *ptr << std::endl;

    *ptr = 33;
    std::cout << "new value: " << *ptr << std::endl;

    auto ptr2 { ptr }; // with = you can't copy value
    std::cout << "ptr1 address: " << ptr << std::endl;
    std::cout << "ptr1 value: " << *ptr << std::endl;
    std::cout << "ptr2 address: " << ptr2 << std::endl;
    std::cout << "ptr2 value: " << *ptr2 << std::endl;

    // std::size_shared can't declare an array (until C++ 20)
    // ilt works identically with unique_ptr
    // const int size = 5;
    //auto pArray = std::make_shared<int[]>(size);
}
