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

void print5(const int *numbers, const size_t &size); // you can will setup array pointer as a readonly and that's work on elements
void print6(int *numbers2[], const size_t &size, const size_t &size2);

int** newArray(const size_t &size, const size_t &size2);

void Lesson16_FunctionsArrays::main() {
    int numbers[] {1,2,3,4,5};
    auto size = std::size(numbers);
    int *begin = std::begin(numbers);
    int *end = std::end(numbers);

    int *numbers2[] { numbers };
    auto size2 = std::size(numbers2);

    print1(numbers);
    print2(numbers);

    print3(numbers, size);
    print4(begin, end);

    print5(numbers, size);
    print6(numbers2, size, size2);

    int **array = newArray(size, size2);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size2; j++)
            std::cout << array[i][j] << "\t";
    std::cout << std::endl;
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
    for (auto i = 0; i < size; i++)
        std::cout << numbers[i] << "\t";
    std::cout << std::endl;
}
void print4(const int *begin, const int *end) {
    for (auto *ptr = begin; ptr != end; ptr++)
        std::cout << *ptr << "\t";
    std::cout << std::endl;
}
void print5(const int *numbers, const size_t &size) {
    for (auto i = 0; i < size; i++)
        std::cout << numbers[i] << "\t";
    std::cout << std::endl;

    // Can't do this because of const
    //for (auto i = 0; i < size; i++)
        //numbers[i] = numbers[i] * 2;
}
void print6(int *numbers2[], const size_t &size, const size_t &size2) {
    for (auto i = 0; i < size2; i++)
        for (auto j = 0; j < size; j++)
            std::cout << numbers2[i][j] << "\t";
    std::cout << std::endl;
}

int** newArray(const size_t &size, const size_t &size2) {
    int** numbers2 = new int*[size];
    for (int i = 0; i < size; ++i) {
        numbers2[i] = new int[size2];
        for (int j = 0; j < size2; ++j) {
            numbers2[i][j] = i + j;
        }
    }
    return numbers2;
}
