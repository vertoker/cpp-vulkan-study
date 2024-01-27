//
// Created by vertog on 27.01.2024.
//

#include "Lesson47_Deque.h"

#include "iostream"
#include "deque"

void Lesson47_Deque::main() {
    std::deque<int> deque1;
    std::deque<int> deque2(5);
    std::deque<int> deque(5, 2);
    std::deque<int> deque4{ 2, 3, 4, 5 };
    std::deque<int> deque5 = { 1, 2, 3, 5 };
    std::deque<int> deque6({ 1, 2, 3, 4, 5 });
    std::deque<int> deque7(deque4);
    std::deque<int> deque8 = deque7;

    auto first = deque4.front();
    auto last = deque4.back();
    std::cout << first << std::endl;
    std::cout << last << std::endl;

    for (int n : deque4)
        std::cout << n << "\t";// 2 3 4 5
    std::cout << std::endl;

    deque4.push_front(1); // push to the start of array
    deque4.push_back(6); // push to the end of array

    for (int n : deque4)
        std::cout << n << "\t";// 1 2 3 4 5 6
    std::cout << std::endl;

    deque4.emplace_front(0); // place to the start of array
    deque4.emplace_back(7); // place to the end of array

    for (int n : deque4)
        std::cout << n << "\t";// 0 1 2 3 4 5 6 7
    std::cout << std::endl;
}
