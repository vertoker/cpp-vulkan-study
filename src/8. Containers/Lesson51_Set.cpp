//
// Created by vertog on 27.01.2024.
//

#include "Lesson51_Set.h"
#include "iostream"
#include "set"

// set is a container that can store only different items
// you can't store equivalent items in a set

// actually use unordered_set when ypu doesn't need ordering
// full name of the set is a priority set
void Lesson51_Set::main() {
    std::set<int> numbers;

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

