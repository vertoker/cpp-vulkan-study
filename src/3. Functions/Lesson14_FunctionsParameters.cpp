//
// Created by vertog on 16.01.2024.
//

#include <iostream>
#include "Lesson14_FunctionsParameters.h"

// prototypes
void identify_yourself(const std::string& name, const unsigned& age = 18);
void squareByValue(int v);
void squareByValueLink(const int& v);
void squareByPointer(const int* p);

void Lesson14_FunctionsParameters::main() {
    const auto name = "Kostya";
    const unsigned age = 21;

    // With prototype, you can call method even its defined below
    identify_yourself(name, age);
    identify_yourself(name);

    auto v = 4;
    squareByValue(v);
    squareByValueLink(v);
    squareByPointer(&v);
    std::cout << v << std::endl;

    // also with methods auto type casting is disabled
}

// const parameters are readonly
void identify_yourself(const std::string& name, const unsigned& age) // can't has default value if has default value in prototype
{
    std::cout << "Name is " << name << std::endl;
    std::cout << "Age  is " << age << std::endl;
}

// use only if you need copy data
void squareByValue(int v) {
    v = v * v;
    std::cout << v << std::endl;
}

// use if you don't want copy data
void squareByValueLink(const int &v) {
    auto result = v * v;
    std::cout << result << std::endl;
}

// equals with a second option, but use if you need a pointer especially
void squareByPointer(const int *p) {
    auto v = *p * *p;
    std::cout << v << std::endl;
}
