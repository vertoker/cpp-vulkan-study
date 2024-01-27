//
// Created by vertog on 27.01.2024.
//

#include "Lesson44_Iterators.h"
#include "iostream"
#include "array"
#include "vector"

void Lesson44_Iterators::main() {
    // Iterator operations
    // *iter  - get current element, which iterator pointed to
    // ++iter - move forward, to the next element
    // --iter - move backward, to the back element
    //
    // iter1 == iter2 - two iterators are equal, if they pointed to the same element
    // equivalent of the *iter1 == *iter2 or something like that
    // iter1 != iter2 - two iterators are not equal, if they pointed to the various elements
    // iter + n - return iterator, which moved forward, to the n next elements
    // iter - n - return iterator, which moved backward, to the n back elements
    // iter += n - move forward, to the n next elements
    // iter -= n - move backward, to the n back elements
    // iter1 - iter2 - return steps count between 2 iterators
    // >, >=, <, <= - compares steps count in iterators

    // INCLUSIONS
    // std::forward_list, std::unordered_set and std::unordered_map
    // do not support --, -= and - because it's one direction arrays
    // std::list, std::map and std::set
    // do not support +=, -=, + and - because it's one direction arrays
    // operators +=, -=, +, -, <, <=, >, >= and <=>
    // supports only by std::vector, std::array and std::deque

    std::array<int, 5> a1 {1, 2, 3, 4, 5};
    std::vector<int> v2 {1, 2, 3, 4, 5};
    const std::vector<int> v3 {1, 2, 3, 4, 5};

    std::vector<int>::iterator i1 = v2.begin(); // use auto
    std::vector<int>::const_iterator i2 = v2.begin(); // use auto

    std::cout << *i1 << std::endl;

    *i1 = 125;
    std::cout << v2[0] << std::endl;

    ++i1;
    std::cout << *i1 << std::endl;

    i1 += 2;
    std::cout << *i1 << std::endl;

    i1 = i1 - 3;
    std::cout << *i1 << std::endl;
    std::cout << std::endl;

    // default while iterator
    i1 = v2.begin();
    while (i1 != v2.end()) {
        std::cout << *i1 << std::endl;
        ++i1;
    }
    std::cout << std::endl;

    // default for iterator
    for (auto start= v2.begin(); start != v2.end(); start++)
        std::cout << *start << std::endl;
    std::cout << std::endl;

    // can be converted to the foreach
    for (int & start : v2)
        std::cout << start << std::endl;
    std::cout << std::endl;

    // const iterator is readonly
    for (auto start= v3.begin(); start != v3.end(); start++) {
        std::cout << *start << std::endl;
        // you can't do that because of const
        // *start = (*start) * (*start);
    }
    std::cout << std::endl;

    // reverse iterator
    for (auto start= v3.rbegin(); start != v3.rend(); start++)
        std::cout << *start << std::endl;
    std::cout << std::endl;

    // iterator for a standard array
    int a2[] {1, 2, 3};
    auto ib1 = std::begin(a2);
    auto ie1 = std::end(a2);

    for (auto iter = ib1; iter != ie1; iter++) {
        std::cout << *iter << std::endl;
    }
}
