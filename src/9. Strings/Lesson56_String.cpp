//
// Created by vertog on 28.01.2024.
//

#include "Lesson56_String.h"
#include "iostream"
#include "string"

using namespace std::string_literals;

void Lesson56_String::main() {
    // string means pointer char with allocated memory for it
    // inside std::string it represents like that

    std::string message; // empty
    // initialization types
    std::string message1 {"Hello World!"};
    std::string message2 = "Hello World!";
    std::string message3 ("Hello World!");
    // Creation in C style
    auto* message4 = new std::string("Hello METANIT.COM!");


    // Utility creations
    std::string message5 (3, 'd'); // repeat 3 times char (not strings)
    std::string message6 (message1, 3); // lo World!
    std::string message7 (message1, 6, 5); // World

    std::cout << message5 << std::endl;
    std::cout << message6 << std::endl;
    std::cout << message7 << std::endl;


    // Input
    std::string words;
    std::cout << "Enter words:";
    std::getline(std::cin, words);
    std::cout << words << std::endl;

    std::string word;
    std::cout << "Enter 1 word:";
    std::cin >> word;
    std::cout << word << std::endl;


    // Size
    message = "Hello";
    std::cout << "length: " << message.length() << std::endl; // 5
    std::cout << "size: " << message.size() << std::endl;     // 5
    std::cout << "empty: " << message.empty() << std::endl;     // false


    // Concatenation
    std::string hello = "hello";
    std::string world = "world";

    message1 = hello + " " + world;
    message2 = hello + " " + world + (" " "!"/*auto concatenation under brackets*/);
    // convert into literals by using namespace std::string_literals
    message3 = "hello"s + " "s + "world"s;

    std::cout << message1 << std::endl;
    std::cout << message2 << std::endl;
    std::cout << message3 << std::endl;

    // \t - tab (several spaces in 1 symbol), like you press Tab
    // \n - next line, like you press Enter
    message1 = "hello\tworld\nhello\tworld";
    //message2 {R"(Name: "Tom" Age: 38)"}; // works in C++20

    std::cout << message1 << std::endl;
    //std::cout << message2 << std::endl;
    //std::cout << message3 << std::endl;
    delete message4;

    // return == 0 if equals
    // return > 0 if message1 > message2
    // return < 0 if message1 < message2
    auto r1 = message1.compare(message2);
}
