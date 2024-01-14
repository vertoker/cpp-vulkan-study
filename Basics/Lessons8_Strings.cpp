//
// Created by vertog on 14.01.2024.
//

#include "Lessons8_Strings.h"
#include "iostream"

void Lessons8_Strings::main() {
    std::string message1 = "Message1";
    std::string message2 {"Message2"};
    std::string message3("Message3");
    std::string message4(message1);

    message1[0] = 'm';
    char ch = message2[1];

    std::cout << message1 << std::endl;
    std::cout << ch << std::endl;

    for (auto& c : message2) {
        if (c == 's') {
            c = 'S';
        }
    }
    std::cout << message2 << std::endl;

    std::string data;
    std::cout << "Input some string data: ";
    getline(std::cin, data);
    std::cout << "Data is " << data;



    char hello1[] {'h', 'e', 'l', 'l', 'o'};
    char hello2[] {"hello"};

    const int max_length = 50;
    char languages[][max_length] {
        "C++", "C#",  "Python", "Java",
        "Kotlin", "Go", "Dart", "PHP"
    };

    std::cout << languages[0] << std::endl; // C++
    std::cout << languages[1] << std::endl; // C#
    std::cout << languages[2] << std::endl; // Python

    char inputText[max_length] {};
    std::cout << "Enter some inputText: ";
    std::cin.getline(inputText, max_length);
    std::cout << "You entered:\n" << inputText << std::endl;
}
