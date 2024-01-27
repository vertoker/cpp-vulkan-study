//
// Created by vertog on 27.01.2024.
//

#include "Lesson48_Stack.h"
#include "iostream"
#include "stack"

void Lesson48_Stack::main() {
    std::stack<std::string> stack;

    stack.emplace("Tom"); // better emplace
    stack.push("Sam");

    auto last = stack.top(); // read last element
    std::cout << "Top: " << last << std::endl;

    stack.pop(); // remove last element

    last = stack.top();
    std::cout << "Top: " << last << std::endl;

    std::cout << "Empty: " << stack.empty() << std::endl;
}
