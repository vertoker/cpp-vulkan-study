//
// Created by vertog on 27.01.2024.
//

#include "Lesson49_Queue.h"
#include "iostream"
#include "queue"


void Lesson49_Queue::main() {
    std::queue<std::string> queue;

    queue.emplace("Tom"); // better emplace
    queue.push("Sam");

    auto first = queue.front(); // read the first element
    auto last = queue.back(); // read the last element
    std::cout << "First: " << first << std::endl;
    std::cout << "Last: " << last << std::endl;

    queue.pop(); // remove first element

    first = queue.front();
    std::cout << "Top: " << first << std::endl;

    std::cout << "Empty: " << queue.empty() << std::endl;
}
