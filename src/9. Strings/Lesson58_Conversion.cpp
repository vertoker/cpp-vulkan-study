//
// Created by vertog on 28.01.2024.
//

#include "Lesson58_Conversion.h"
#include "iostream"
#include "string"

void Lesson58_Conversion::main() {
    // Table Conversions
    //
    // std::to_string() - to string
    // <std::string>.c_str() - to const char*
    // <std::string>.data() - to char*
    //
    // std::stoi() - to int
    // std::stol() - to long
    // std::stoll() - to long long
    // std::stoul() - to unsigned long
    // std::stoull() - to unsigned long long
    // std::stof() - to float
    // std::stod() - to double
    // std::stold() - to long double

    unsigned age = 38;
    std::string message = std::to_string(age);

    unsigned n = std::stoi(message);
    const char* message_ptr_const = message.c_str();
    char* message_ptr = message.data();

    std::cout << message << std::endl;
    std::cout << n << std::endl;
    std::cout << message_ptr_const << std::endl;
    std::cout << message_ptr << std::endl;
}
