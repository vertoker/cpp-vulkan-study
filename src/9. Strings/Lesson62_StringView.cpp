//
// Created by vertog on 28.01.2024.
//

#include "Lesson62_StringView.h"
#include "iostream"
#include "string_view"
#include "string"

void print(std::string_view text) {
    std::cout << text << std::endl;
}

// std::string_view is better than const std::string&
// when you need to bounce an object to the method
// std::string_view doesn't allow copy anything
void Lesson62_StringView::main() {
    std::string message{"hello"};
    print(message);
    print("Hello Work");
}
