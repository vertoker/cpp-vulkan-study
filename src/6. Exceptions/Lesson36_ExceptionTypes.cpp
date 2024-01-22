//
// Created by vertog on 22.01.2024.
//

#include "Lesson36_ExceptionTypes.h"

#include <utility>
#include "iostream"

class AgeException
{
private:
    std::string message;

public:
    explicit AgeException(std::string message) : message(std::move(message)) {}
    virtual std::string getMessage() const { return message; }
};

class MaxAgeException : public AgeException
{
private:
    unsigned maxAge;

public:
    MaxAgeException(std::string message, unsigned maxAge): AgeException{std::move(message)}, maxAge{maxAge} { }
    [[nodiscard]] std::string getMessage() const override
    { return AgeException::getMessage() + " Max age should be " + std::to_string(maxAge); }
};

void Lesson36_ExceptionTypes::main() {
    int age;

    std::cout << "Enter age: ";
    std::cin >> age;

    try {
        if (age < 0) {
            throw AgeException {"Age is not in bounds"};
        }
        else if (age > 100) {
            throw MaxAgeException {"Age is not in bounds", 100};
        }
        else {
            std::cout << "Your age is " << age << std::endl;
        }
    }
    catch (const MaxAgeException& ex) {
        std::cout << "MaxAgeException: " << ex.getMessage() << std::endl;
    }
    catch (const AgeException& ex) {
        std::cout << "AgeException: " << ex.getMessage() << std::endl;
    }
}
