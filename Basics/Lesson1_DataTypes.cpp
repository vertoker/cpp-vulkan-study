//
// Created by vertog on 14.01.2024.
//

#include "iostream"
#include "Lesson1_DataTypes.h"

#define nameof(v) #v

void Lesson1_DataTypes::main() {
    // 1 byte (not 1 bit)
    // Can be true or false
    bool b = true; // default is false

    std::cout << nameof(b) << " is " << (b ? "true" : "false") << std::endl;
    std::cout << std::endl;

    // Number boundaries (can be space writing with ' symbol between numbers)
    // 1 byte
    // signed = from -128 to 127
    // unsigned = from 0 to 255
    // 2 bytes
    // signed = from -32'768 to 32'767
    // unsigned = from 0 to 65'535
    // 4 bytes
    // signed = from -2'147'483'648 to 2'147'483'647
    // unsigned = from 0 to 4'294'967'295
    // 8 bytes
    // signed = from -9'223'372'036'854'775'807 to 9'223'372'036'854'775'807
    // unsigned = from 0 to 18'446'744'073'709'551'615

    // 1 byte
    char c = 127; // may be equal signed char, but not every time
    signed char sc = -128; // equals signed byte
    unsigned char usc = 255; // equals unsigned byte

    std::cout << nameof(c) << " is " << nameof(char) << " and equals " << c << std::endl;
    std::cout << nameof(sc) << " is " << nameof(signed char) << " and equals " << sc << std::endl;
    std::cout << nameof(usc) << " is " << nameof(unsigned char) << " and equals " << usc << std::endl;
    std::cout << std::endl;

    // 2 bytes
    short s = 32'767; // equals short int, signed short int, signed short
    signed short ss = -32'768;
    unsigned short us = 65'535;

    std::cout << nameof(s) << " is " << nameof(short) << " and equals " << s << std::endl;
    std::cout << nameof(ss) << " is " << nameof(signed short) << " and equals " << ss << std::endl;
    std::cout << nameof(us) << " is " << nameof(unsigned short) << " and equals " << us << std::endl;
    std::cout << std::endl;

    // 4 bytes (may can be 2 bytes)
    int i = 2'147'483'647; // equals signed int
    signed int si = -2'147'483'648; // equals signed
    unsigned int ui = 4'294'967'295U; // equals unsigned

    std::cout << nameof(i) << " is " << nameof(int) << " and equals " << i << std::endl;
    std::cout << nameof(si) << " is " << nameof(signed int) << " and equals " << si << std::endl;
    std::cout << nameof(ui) << " is " << nameof(unsigned int) << " and equals " << ui << std::endl;
    std::cout << std::endl;

    // 4 bytes (may can be 8 bytes)
    long l = 2'147'483'647L; // equals long int, signed long int, signed long
    signed long sl = -2'147'483'648L; // equals signed long int
    unsigned long ul = 4'294'967'295UL; // equals unsigned long int

    std::cout << nameof(l) << " is " << nameof(long) << " and equals " << l << std::endl;
    std::cout << nameof(sl) << " is " << nameof(signed long) << " and equals " << sl << std::endl;
    std::cout << nameof(ul) << " is " << nameof(unsigned long) << " and equals " << ul << std::endl;
    std::cout << std::endl;

    // 8 bytes
    long long ll = 9'223'372'036'854'775'807LL; // equals long int, signed long int, signed long
    signed long long sll = -9'223'372'036'854'775'807LL; // equals signed long int
    unsigned long long ull = 18'446'744'073'709'551'615ULL; // equals unsigned long int

    std::cout << nameof(ll) << " is " << nameof(long long) << " and equals " << ll << std::endl;
    std::cout << nameof(sll) << " is " << nameof(signed long long) << " and equals " << sll << std::endl;
    std::cout << nameof(ull) << " is " << nameof(unsigned long long) << " and equals " << ull << std::endl;
    std::cout << std::endl;

    // Counting systems writes (all numbers equals 25)
    int num10 = 25;
    int num16 = 0x19;
    int num8 = 031;
    int num2 = 0b11001;

    std::cout << nameof(num10) << " equals " << num10 << std::endl;
    std::cout << nameof(num16) << " equals " << num16 << std::endl;
    std::cout << nameof(num8) << " equals " << num8 << std::endl;
    std::cout << nameof(num2) << " equals " << num2 << std::endl;
    std::cout << std::endl;

    // 4 bytes
    float f = 2'000'000;

    std::cout << nameof(f) << " is " << nameof(float) << " and equals " << f << std::endl;
    std::cout << std::endl;

    // 8 bytes
    double d = 2'000'000'000'000'000;
    long double ld = 2'000'000'000'000'000'000;

    std::cout << nameof(d) << " is " << nameof(double) << " and equals " << d << std::endl;
    std::cout << nameof(ld) << " is " << nameof(long double) << " and equals " << ld << std::endl;
    std::cout << std::endl;

    char c2 = 'A'; // 1 byte
    wchar_t wc = 'A'; // 2 bytes on Windows, 4 bytes on Linux
    //char8_t c8 = 'A'; // 1 byte
    char16_t c16 = 'A'; // 2 bytes
    char32_t c32 = 'A'; // 4 bytes

    std::cout << nameof(c2) << " is " << nameof(char) << " and equals " << c2 << std::endl;
    std::cout << nameof(wc) << " is " << nameof(wchar_t) << " and equals " << wc << std::endl;
    std::cout << nameof(c16) << " is " << nameof(char16_t) << " and equals " << c16 << std::endl;
    std::cout << nameof(c32) << " is " << nameof(char32_t) << " and equals " << c32 << std::endl;
}
