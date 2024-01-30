//
// Created by vertog on 28.01.2024.
//

#include "Lesson63_LRValue.h"
#include "iostream"

void print(std::string&& text)
{
    std::cout << text << std::endl;
}

// in that scope, I'd think, that function copy value when return new value
// But in reality if I return variable (lvalue) it can apply NRVO optimization
// named return value optimization
// and value won't copy further
std::string defaultMessage()
{
    std::string message{"hello world"};
    return message; // if it's variable; than compiler thinks that is lvalue, elsewhere rvalue
}

// That also works with parameters,
// But it works only if you don't change string
// use const for better compiler optimization
std::string defaultMessage(const std::string& text)
//std::string defaultMessage(std::string& text) // in that scope optimization under the danger
{
    //text = text + text; this will be produce 2 malloc: in parameters and here
    std::string message{"hello world"};
    return message; //
}

void Lesson63_LRValue::main() {
    // Expression contains =,
    // And it writes like: lvalue = rvalue;
    // Look at simple expression
    int n = 5;
    // it contains lvalue and rvalue
    //
    // lvalue is "int n"
    // it represents address in memory with variable name
    //
    // rvalue is "5"
    // it's only readonly

    // you can create rvalue variable
    // looks like a link, but different
    int&& ref1 = n + 3;

    //int&& ref2 = n;
    // you can't link like that
    // use std::move
    int&& ref3 = std::move(n); // convert int to int&&

    // also works with const
    const int m = 2;
    const int&& mRef = std::move(m);

    // you can use rvalue link as parameter
    print("Hi");

    defaultMessage();
    defaultMessage("Hi");
}
