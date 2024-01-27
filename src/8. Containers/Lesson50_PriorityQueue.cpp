//
// Created by vertog on 27.01.2024.
//

#include "Lesson50_PriorityQueue.h"
#include "iostream"
#include "queue"

// works like queue (but has methode like in stack),
// but filter elements when you add them
// by default its sort by which value is higher,
// bigger in front, lesser in back
void Lesson50_PriorityQueue::main() {
    std::priority_queue<int> queue;

    queue.push(1);
    queue.push(5);
    queue.push(2);
    queue.push(4);
    queue.push(3);

    auto last = queue.top(); // read last element
    std::cout << "Top: " << last << std::endl;

    queue.pop(); // remove last element

    last = queue.top();
    std::cout << "Top: " << last << std::endl;

    std::cout << "Empty: " << queue.empty() << std::endl;
}
