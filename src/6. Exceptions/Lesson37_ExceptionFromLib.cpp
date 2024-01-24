//
// Created by vertog on 24.01.2024.
//

#include "Lesson37_ExceptionFromLib.h"

#include <utility>
#include "iostream"

double divide(int a, int b);

// override a new type of exception
class DivideByZeroError : public std::exception {
private:
    std::string message;

public:
    explicit DivideByZeroError() {
        message = "You can't divide by 0";
    }

    [[nodiscard]] const char* what() const noexcept override {
        return message.c_str(); // string in C is a pointer to the first character of string
    }
};

void Lesson37_ExceptionFromLib::main() {
    int x = 500;
    int y = 0;

    try {
        double z = divide(x, y);
        std::cout << z << std::endl;
    }
    catch (const DivideByZeroError& err) {
        std::cout << err.what() << std::endl;
    }
    catch (const std::exception& err) {
        std::cout << err.what() << std::endl;
    }
}

double divide(int a, int b) {
    if (!b)
        throw DivideByZeroError();
    return a / b;
}

// From std::exception exists default errors
// std::bad_alloc
// std::bad_cast
// std::bad_typeid
// std::bad_exception
// std::logic_error - exceptions for logical errors
//     std::domain_error - parameter of function is not define
//     std::invalid_argument - parameter is invalid or incorrect
//     std::length_error - attempt to create object with size, bigger than object allow
//     std::out_of_range - out of range something, usually array
// std::runtime_error - exceptions that can only catch in runtime
//     std::overflow_error - result is not in a high boundary, usually if parameter is incorrect
//     std::range_error - out of range something, usually pointer bounds
//     std::underflow_error - result is not in a low boundary, usually if parameter is incorrect
//     (opposite to the std::overflow_error)