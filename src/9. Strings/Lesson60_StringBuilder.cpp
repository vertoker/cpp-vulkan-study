//
// Created by vertog on 28.01.2024.
//

#include "Lesson60_StringBuilder.h"
#include "iostream"
#include "string"

void Lesson60_StringBuilder::main() {
    std::string message{ "hello"};
    const std::string empty; // elegant usage

    message.append(" ");
    message.append("world");
    std::cout << message << std::endl;

    message.insert(5, " a string");
    std::cout << message << std::endl;

    message.replace(0, 5, "Hi");
    std::cout << message << std::endl;

    message.replace(0, 1, empty);
    std::cout << message << std::endl;

    message.erase(0, 2);
    std::cout << message << std::endl;
}
