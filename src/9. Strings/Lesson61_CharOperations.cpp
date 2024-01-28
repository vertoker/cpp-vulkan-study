//
// Created by vertog on 28.01.2024.
//

#include "Lesson61_CharOperations.h"
#include "iostream"
#include "cstring"

void Lesson61_CharOperations::main() {
    // Operations for char
    //
    // std::isupper(c) - Letter in upper case
    // std::islower(c) - Letter in lower case
    // std::isalpha(c) - Letter in alphabet
    // std::isdigit(c) - Letter is number
    // std::isxdigit(c) -Letter is number in hexadecimal (0-9, A-F)
    // std::isalnum(c) - Letter is number or in alphabet, equals isalpha(c) || isdigit(c)
    // std::isspace(c) - Letter is space ' ' or special symbols: '\n', '\r', '\f', '\t', '\v'
    // std::isblank(c) - Letter is space ' ' or tab '\t'
    // std::ispunct(c) - Letter is punctuation symbol: _ { } [ ] # ( ) < > % : ; ? * + - / ^ & | ~ ! =
    // std::isprint(c) - Letter is can be printed
    // std::iscntrl(c) - Letter is control not print symbol
    // std::isgraph(c) - Letter has graphical expression
    //
    // std::toupper(c) - Letter go to upper case
    // std::tolower(c) - Letter go to lower case


    char letter = 'a';
    if (std::isupper(letter))
        std::cout << "Uppercase letter" << std::endl;
    else if (std::islower(letter))
        std::cout << "Lowercase letter" << std::endl;
    else std::cout << "Undefined" << std::endl;

    std::string text {"Phone number: +1(234)456-78-90"};
    std::string phone;
    for (unsigned i = 0; i < text.length(); i++)
        if (std::isdigit(text[i]))
            phone += text[i];
    std::cout << phone << std::endl;
}
