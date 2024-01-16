//
// Created by vertog on 16.01.2024.
//

#include "Lesson13_FunctionsBasics.h"
#include "iostream"

int n = 5;

void hello()
{
    std::cout << "hello" << std::endl;
}

void printN()
{
    std::cout << "n1 = " << n << std::endl;
}

void printNStatic()
{
    static int ns {1};
    std::cout << "ns = " << ns << std::endl;
    ns++;
}

void Lesson13_FunctionsBasics::main() {
    hello();
    hello();

    printN();
    std::cout << "n2 = " << n << std::endl;

    // Localize data
    int n1 = 7;

    {
        int n2 = 9;
        std::cout << "n1 = " << n1 << std::endl;
        std::cout << "n2 = " << n2 << std::endl;
    }

    std::cout << "n1 = " << n1 << std::endl;
    //std::cout << "n2 = " << n2 << std::endl; error

    // Hide variables
    int n = 10;
    std::cout << "n = " << n << std::endl; // 5

    {
        int n = 20;
        std::cout << "n = " << n << std::endl; // 5
    }

    printNStatic();
}
