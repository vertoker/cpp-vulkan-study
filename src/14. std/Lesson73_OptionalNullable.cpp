//
// Created by vertog on 03.02.2024.
//

#include "Lesson73_OptionalNullable.h"
#include "iostream"
#include "string"
#include "optional"

std::optional<unsigned> findIndex(const std::string& text, char c) {
    if (text.empty())
        return std::nullopt;

    for (unsigned i = 0; i < text.size(); i++) {
        if (text[i] == c) {
            return i;
        }
    }

    return std::nullopt;
}

void Lesson73_OptionalNullable::main() {
    std::string text = "Hello, it's me!";
    char ch1 = 'l';
    char ch2 = 'q';

    auto index1 = findIndex(text, ch1);
    auto index2 = findIndex(text, ch2);

    if (index1.has_value()) std::cout << index1.value() << std::endl;
    if (index2 != std::nullopt) std::cout << *index2 << std::endl;
    std::cout << index2.value_or(-1) << std::endl;
    //also has value_or(default) which returns items or another item if null (only the same type)
}
