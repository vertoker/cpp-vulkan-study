//
// Created by vertog on 20.01.2024.
//

#include "Lesson34_Basics.h"
#include "iostream"

double divide(int &a, int &b) {
    if (b) // != 0
        return static_cast<double>(a) / static_cast<double>(b);
    throw std::invalid_argument("Do not divide by zero");
}

void Lesson34_Basics::main() {
    int x = 500;
    int y = 0;

    try
    {
        double z {divide(x, y)};
        std::cout << z << std::endl;
    }
    catch (...)
    {
        std::cout << "Error!" << std::endl;
    }
    std::cout << "The End..." << std::endl;
}
