//
// Created by vertog on 16.01.2024.
//

#include <iostream>
#include "Lesson16_FunctionsArrays.h"

// They are the same parameters
// Better use first variant because it's better to understand what is it:
// its array or another variable pointer
void print1(const int numbers[]); // this equals to pointer of an array
void print2(int *numbers); // equals to this

void print3(int numbers[], size_t& size); // first variant to send array data
void print4(const int *begin, const int *end); // second variant to send array data

void print5(const int *numbers); // you can will setup array pointer as a readonly and that's work on elements

void Lesson16_FunctionsArrays::main() {
    int numbers[] {1,2,3,4,5};
    auto size = std::size(numbers);
    int *begin = std::begin(numbers);
    int *end = std::end(numbers);

    print1(numbers);
    print2(numbers);

    print3(numbers, size);
    print4(begin, end);
}

void print1(const int numbers[]) {
    // It's not work properly
    int size = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << size << std::endl;

    // Didn't work with a pointer
    //for (int n : numbers)
    //    std::cout << n << std::endl;
}
void print2(int *numbers) {
    std::cout << numbers << std::endl;
}

void print3(int *numbers, size_t &size) {
    for (auto i = 0; i < size; i++) {
        std::cout << numbers[i] << "\t";
    }
}
void print4(const int *begin, const int *end) {
    for (auto *ptr = begin; ptr != end; ptr++) {
        std::cout << *ptr << "\t";
    }
}
