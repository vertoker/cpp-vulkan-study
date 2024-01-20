//
// Created by vertog on 18.01.2024.
//

#include "Lesson21_UniquePtr.h"
#include "iostream"
#include "memory"

// unique_ptr cant do ref to the address, which used by another unique_ptr
// standard ptr can do that: it can store one address in many ptr's

// unique_ptr ils auto memory management variable
// you don't need to delete it because ilt do it self, when no one need it

void Lesson21_UniquePtr::main() {
    //  can't define empty unique ptr
    // std::unique_ptr<int> = nullptr; // doesn't work
    // std::unique_ptr<int>;
    // std::unique_ptr<int> {};
    // std::unique_ptr<int> {nullptr};

    // std::make_unique allocate memory for item and put item in the address
    std::unique_ptr<int> ptr = { std::make_unique<int>(125) };
    // you can get a standard pointer on memory address
    int *ptr2 = ptr.get();
    std::cout << "Address: " << ptr2 << std::endl;
    std::cout << "Value: " << *ptr << std::endl;

    *ptr = 254;
    std::cout << "New value: " << *ptr << std::endl;

    const int size = 5;
    // std::size_unique also understand collections
    auto pArray = std::make_unique<int[]>(size);

    pArray[1] = 121;
    std::cout << "Value: " << pArray[1] << std::endl;

    // Memory free can be called from ptr.reset()
    // After that method ptr will be equals nullptr
    ptr.reset();
    pArray.reset();

    // Also you can check existence of pointer
    // It implicitly compares with nullptr
    if (ptr) {
        std::cout << *ptr << std::endl;
    }
}
