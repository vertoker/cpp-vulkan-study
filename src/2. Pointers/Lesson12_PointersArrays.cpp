//
// Created by vertog on 15.01.2024.
//

#include <iostream>
#include "Lesson12_PointersArrays.h"

void Lesson12_PointersArrays::main() {
    int nums[] {10, 20, 30, 40, 50 };
    std::cout << "address: " << nums << std::endl; // its immutable pointer
    std::cout << "value: " << *nums << std::endl;

    int num2 = *(nums + 1);
    int *pNum3 = nums + 2;

    std::cout << "num2: " << num2 << std::endl;
    std::cout << "pNum3: " << pNum3 << std::endl;
    std::cout << "pNum3: " << *pNum3 << std::endl;

    auto length = std::size(nums);
    for (auto i = 0; i < length; i++)
        std::cout << "nums[" << i << "]: address=" << nums + i << "\tvalue=" << *(nums + i) << std::endl;
    for (auto *ptr = nums; ptr <= &nums[length - 1]; ptr++)
        std::cout << "address=" << ptr << "\tvalue=" << *ptr << std::endl;

    const unsigned int n = 4, m = 2;
    int nums2[n][m]
    {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    };

    int *start = nums2[0];
    int *end = nums2[0] + n * m - 1;
    for (auto i = 1; start <= end; start++, i++) {
        std::cout << *start << "\t";
        if (i % m == 0)
            std::cout << std::endl;
    }

    char hello[] = "hello";
    char *pHello = hello;
    std::cout << pHello << std::endl;
    std::cout << &pHello << std::endl;
    std::cout << (void*)pHello << std::endl;

    char languages[][20] { "C++", "Python", "JavaScript"};
    auto length2 = sizeof(languages) / 20;
    std::cout << length2 << std::endl;

    for (auto i = 0; i < length2; i++) {
        std::cout << languages[i] << std::endl;
    }
}
