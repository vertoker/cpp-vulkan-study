//
// Created by vertog on 27.01.2024.
//

#include "Lesson45_List.h"
#include "iostream"
#include "list"

// list is a doubly linked list
void Lesson45_List::main() {
    std::list<int> list1;                  // empty list
    std::list<int> list2 (5);           // consists of 5 elements, filled by default elements
    std::list<int> list3 (5, 2);  // consists of 5 elements, filled by 2
    std::list<int> list4 { 1, 2, 4, 5 };   // consists of 4 elements, contains 1, 2, 4, 5
    std::list<int> list5 = { 1, 2, 3, 5 }; // consists of 4 elements, contains 1, 2, 4, 5
    std::list<int> list6(list4);           // copy of list4
    std::list<int> list7 = list4;          // copy of list4

    auto first = list4.front();
    auto last = list4.back();

    std::cout << "First: " << first << std::endl;
    std::cout << "Last: " << last << std::endl;

    for (int n : list4)
        std::cout << n << "\t";
    std::cout << std::endl;

    for (auto iter = list4.begin(); iter != list4.end(); iter++)
        std::cout << *iter << "\t";
    std::cout << std::endl;

    std::cout << list4.size() << "\n";
    std::cout << list1.empty() << "\n";
    std::cout << list4.empty() << "\n";

    // list doesn't contains default []

    // read - doesn't contain, only with iterators
    // write
    list4.assign({ 21, 22, 23, 24, 25 }); // rewrite by new array of elements
}
