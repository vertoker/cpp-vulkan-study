//
// Created by vertog on 10.02.2024.
//

#include "ThreadBasics.h"
#include "iostream"
#include "thread"

void exampleWork1() {
    int counter = 0;

    while (counter < 1'000'000'000) {
        counter++;
    }

    std::cout << counter << std::endl;
}

void ThreadBasics::main() {
    // Create thread
    std::thread worker (exampleWork1);

    // Its wait until it's done
    worker.join();

    std::cin.get();
}
