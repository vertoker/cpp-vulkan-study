//
// Created by vertog on 28.01.2024.
//

#include "Lesson54_UnorderedMap.h"
#include "iostream"
#include "unordered_map"

void Lesson54_UnorderedMap::main() {
    std::unordered_map<std::string, unsigned> persons;

    // can be initialized like this
    std::unordered_map<std::string, unsigned> products
    {
        {"bread", 30},
        {"milk", 80},
        {"apple", 60}
    };

    // append or set
    persons["Tom"] = 22;
    persons["Bob"] = 25;
    persons["Paul"] = 29;

    // remove
    products.erase("milk");

    // get
    std::cout << persons["Tom"] << std::endl;
    std::cout << persons["Bob"] << std::endl;
    std::cout << persons["Paul"] << std::endl;

    // contains
    std::cout << products.count("apple")<< std::endl;

    // foreach, iterate std::pair<const Key, Value>
    // key is always const
    for (auto& [name, age] : persons)// (can be written only in C++17+)
        std::cout << name << "\t" << age << std::endl;

    // second variant (can be const)
    for (const auto& person : persons)
        std::cout << person.first << "\t" << person.second << std::endl;

    // Iterators
    std::unordered_map<std::string, std::string> phoneBook
    {
        {"+11111111111", "Tom"},
        {"+12222222222", "Bob"},
        {"+13333333333", "Sam"}
    };

    for (auto iter{phoneBook.begin()}; iter != phoneBook.end(); iter++)
        std::cout << iter->first << "\t" << iter->second << std::endl;
    for (auto iter{phoneBook.cbegin()}; iter != phoneBook.cend(); iter++)
        std::cout << iter->first << "\t" << iter->second << std::endl;
}
