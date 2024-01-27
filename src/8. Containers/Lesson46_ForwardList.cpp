//
// Created by vertog on 27.01.2024.
//

#include "Lesson46_ForwardList.h"
#include "iostream"
#include "forward_list"

void Lesson46_ForwardList::main() {
    std::forward_list<int> list1;
    std::forward_list<int> list2(5);
    std::forward_list<int> list3(5, 2);
    std::forward_list<int> list4 { 1, 2, 4, 5 };
    std::forward_list<int> list5 = { 1, 2, 3, 4, 5 };
    std::forward_list<int> list6 (list4);
    std::forward_list<int> list7 = list4;
    std::forward_list<int> list8({ 1, 2, 3, 4, 5, 6 });

    int first {list4.front()};
    std::cout << "First: " << first << std::endl;

    for (int n : list4)
        std::cout << n << "\t";
    std::cout << std::endl;

    auto current = list4.begin();
    auto end = list4.end();
    while (current != end)
    {
        std::cout << *current << "\t";
        current++;
    }
    std::cout << std::endl;

    auto prev = list4.before_begin(); // special iterator with -1 index
    while (++prev != end)
    {
        std::cout << *prev << "\t";
    }
    std::cout << std::endl;
}
