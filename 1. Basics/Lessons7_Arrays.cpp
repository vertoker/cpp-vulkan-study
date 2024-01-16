//
// Created by vertog on 14.01.2024.
//

#include <iostream>
#include "Lessons7_Arrays.h"

void Lessons7_Arrays::main() {
    // Array
    int numbers[5] { 1, 2, 3, 4, 5 };
    // You can't rewrite array because it's not pointer
    // numbers = int[7];
    // int numbers2 = numbers;

    numbers[1] = 123;
    numbers[2] = 234;
    numbers[3] = 345;

    // sizeof measure size of objects in bits
    // Only option to calculate array length is divide array size onto element size
    int length = sizeof(numbers) / sizeof(int);
    std::cout << length << std::endl;

    for (int i=0; i < length; i++)
        std::cout << numbers[i] << ' ';
    std::cout << std::endl;

    for (int i=0; i < std::size(numbers); i++)
        std::cout << numbers[i] << ' ';
    std::cout << std::endl;

    for (int number : numbers)
        std::cout << number << ' ';
    std::cout << std::endl;

    // Multidimensional Array
    const int rows = 3, columns = 2;
    int numbers2[rows][columns]{
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            std::cout << numbers2[i][j] << "\t";
        std::cout << std::endl;
    }

    for(auto& i : numbers2)
        for (auto& j : i)
            std::cout << j << "\t";
    std::cout << std::endl;

    // Jagged Array
    const int columnsLengths[rows] { 2, 4, 6 };
    int *numbers3[rows];

    for (int i = 0; i < rows; i++) {
        numbers3[i] = new int[columnsLengths[i]];
    }

    /*
    const int *columnsLengths = new int[] { 2, 4, 6 };
    int **numbers3 = new int *[rows];

    for (int i = 0; i < rows; i++) {
        numbers3[i] = new int[columnsLengths[i]];
    }*/
}
