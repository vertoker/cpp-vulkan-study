//
// Created by vertog on 28.01.2024.
//

#include "Lesson59_Functions.h"
#include "iostream"
#include "string"

void Lesson59_Functions::main() {

    std::string hello {"Hello"};
    std::string world {"World!"};
    std::string message = hello + ' ' + world;

    std::string subMessage = message.substr(4,4);

    std::cout << message << std::endl;
    std::cout << subMessage << std::endl;

    // Starts with (2 variants)
    if (message.compare(0, hello.length(), hello) == 0)
        std::cout << "The text starts with " << hello << std::endl;
    if (message.substr(0, hello.length()) == hello)
        std::cout << "The text starts with " << hello << std::endl;

    // Ends with (2 variants)
    // First find end index
    unsigned end = message.length() - world.length();
    if (message.compare(end, world.length(), world) == 0)
        std::cout << "The text ends with " << world << std::endl;
    if (message.substr(end, world.length()) == world)
        std::cout << "The text ends with " << world << std::endl;

    // works ony with C++20
    /*if (message.starts_with(hello))
        std::cout << "The text starts with " << hello << std::endl;*/
    /*if (message.ends_with(world))
        std::cout << "The text ends with " << world << std::endl;*/

    // Find
    // std::string::npos means like it's not founded value, like null in FirstOrDefault in C#
    if (message.find(hello) == std::string::npos)
        std::cout << "Not found" << std::endl;
    // Starts with index 10
    if (message.find(hello, 10) == std::string::npos)
        std::cout << "Not found" << std::endl;
    // rfind starts search from an end of string
    if (message.rfind(hello) == std::string::npos)
        std::cout << "Not found" << std::endl;
    // find first of return position on the first compare in string
    if (message.find_first_of(hello) == std::string::npos)
        std::cout << "Not found" << std::endl;
    // find the last of return position on the first compare in string
    if (message.find_last_of(hello) == std::string::npos)
        std::cout << "Not found" << std::endl;
}
