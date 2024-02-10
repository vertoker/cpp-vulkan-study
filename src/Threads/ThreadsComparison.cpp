//
// Created by vertog on 10.02.2024.
//

#include "ThreadsComparison.h"
#include "thread"
#include "chrono"
#include "iostream"

void exampleWork2() {
    int counter = 0;

    while (counter < 1'000'000'000) {
        counter++;
    }
}

void threadWork() {
    exampleWork2();
    std::cout << "Completed in thread" << std::endl;
}
void standardWork() {
    exampleWork2();
    std::cout << "Completed" << std::endl;
}

void executeThreads(){

}

typedef void (*action)();
void ThreadsComparison::main() {
    int arrayCount = 20;
    std::thread threads[20];
    action tasks[20];

    for (int i = 0; i < arrayCount; i++) {
        threads[i] = std::thread(threadWork);
        tasks[i] = standardWork;
    }
}
