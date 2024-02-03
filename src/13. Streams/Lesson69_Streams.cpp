//
// Created by vertog on 02.02.2024.
//

#include "Lesson69_Streams.h"
#include "iostream"

void Lesson69_Streams::main() {
    // istream and wistream - for reading
    // ostream and wostream - for writing
    // iostream and wiostream - for reading and writing
    // with w support wchar_t type

    // by default
    // cout - ostream for console
    // cin - istream for console
    // cerr - ostream for console specified for errors

    // wcout, wcin, wcerr - same but special for wchar_t


    // for ostream writing using <<
    std::cout << "Hello" << std::endl;

    // for istream reading using >>
    int age;
    std::string name;
    std::cin >> age;
    // better use getline() for strings
    std::getline(std::cin, name);
    // you can specify end line symbol
    std::getline(std::cin, name, '*'); // name ends with *

    // you can print error with cerr
    std::cerr << "Error occupied" << std::endl;


}
