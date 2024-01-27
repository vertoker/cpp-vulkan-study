//
// Created by vertog on 27.01.2024.
//

#include "Lesson53_UnorderedSet.h"
#include "iostream"
#include "unordered_set"

// unordered_set works like a set, but without ordering
// if you use a set only like hashtable, then use this
void Lesson53_UnorderedSet::main() {

    std::unordered_set<int> numbers;

    // add
    numbers.insert(1);
    numbers.insert(2);
    numbers.insert(3);
    numbers.insert(4);
    numbers.insert(5);

    for (int n : numbers)
        std::cout << n << "\t";
    std::cout << std::endl;

    // remove
    numbers.erase(3);
    numbers.erase(4);

    for (int n : numbers)
        std::cout << n << "\t";
    std::cout << std::endl;

    // contains
    std::cout << numbers.count(10) << std::endl;
    std::cout << numbers.count(2) << std::endl;
}
