//
// Created by vertog on 28.01.2024.
//

#include "Lesson57_Unicode.h"
#include "string"

void Lesson57_Unicode::main() {
    std::wstring text {L"Hello World!"}; // L
    //std::u8string text8{u8"Hello World!"}; // usual std::string
    std::string text8{u8"Hello World!"}; // u8
    std::u16string text16 {u"Hello World!"}; // u
    std::u32string text32 {U"Hello World!"}; // U

    // C++ have bad support for Unicode
}
