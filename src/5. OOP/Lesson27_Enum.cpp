//
// Created by vertog on 20.01.2024.
//

#include "iostream"
#include "Lesson27_Enum.h"

// enum is a const bind for value to the number
enum class Date {
    Monday = 1,
    Mon = 1, // can define with same value
    //Monday = 2, // but can't define with same name
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6,
    Sunday = 7
};


// you can bind enum to the char or any string literal value
enum class Operation {
    Add = '+',
    Subtract = '-',
    Multiply = '*',
    Division = '/'
};

int calculate(Operation &op, int &num1, int &num2) {
    switch (op) {
        case Operation::Add:
            return num1 + num2;
        case Operation::Subtract:
            return num1 - num2;
        case Operation::Multiply:
            return num1 * num2;
        case Operation::Division:
            return num1 / num2;
    }
}

void Lesson27_Enum::main() {
    auto num1 = 4;
    auto num2 = 6;
    auto operation = Operation::Add;
    auto date = Date::Monday;

    std::cout << calculate(operation, num1, num2) << std::endl;
    std::cout << static_cast<int>(date) << std::endl;
}
