//
// Created by vertog on 14.01.2024.
//

#include "iostream"
#include "Lesson1_DataTypes.h"

using std::cout;
using std::endl;

#define nameof(v) #v

void Lesson1_DataTypes::main() {
    // 1 byte (not 1 bit)
    // Can be true or false
    bool b = true; // default is false

    cout << nameof(b) << " is " << (b ? "true" : "false") << endl;
    cout << endl;

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

    cout << nameof(c) << " is " << nameof(char) << " and equals " << c << endl;
    cout << nameof(sc) << " is " << nameof(signed char) << " and equals " << sc << endl;
    cout << nameof(usc) << " is " << nameof(unsigned char) << " and equals " << usc << endl;
    cout << endl;

    // 2 bytes
    short s = 32'767; // equals short int, signed short int, signed short
    signed short ss = -32'768;
    unsigned short us = 65'535;

    cout << nameof(s) << " is " << nameof(short) << " and equals " << s << endl;
    cout << nameof(ss) << " is " << nameof(signed short) << " and equals " << ss << endl;
    cout << nameof(us) << " is " << nameof(unsigned short) << " and equals " << us << endl;
    cout << endl;

    // 4 bytes (may can be 2 bytes)
    int i = 2'147'483'647; // equals signed int
    signed int si = -2'147'483'648; // equals signed
    unsigned int ui = 4'294'967'295U; // equals unsigned

    cout << nameof(i) << " is " << nameof(int) << " and equals " << i << endl;
    cout << nameof(si) << " is " << nameof(signed int) << " and equals " << si << endl;
    cout << nameof(ui) << " is " << nameof(unsigned int) << " and equals " << ui << endl;
    cout << endl;

    // 4 bytes (may can be 8 bytes)
    long l = 2'147'483'647L; // equals long int, signed long int, signed long
    signed long sl = -2'147'483'648L; // equals signed long int
    unsigned long ul = 4'294'967'295UL; // equals unsigned long int

    cout << nameof(l) << " is " << nameof(long) << " and equals " << l << endl;
    cout << nameof(sl) << " is " << nameof(signed long) << " and equals " << sl << endl;
    cout << nameof(ul) << " is " << nameof(unsigned long) << " and equals " << ul << endl;
    cout << endl;

    // 8 bytes
    long long ll = 9'223'372'036'854'775'807LL; // equals long int, signed long int, signed long
    signed long long sll = -9'223'372'036'854'775'807LL; // equals signed long int
    unsigned long long ull = 18'446'744'073'709'551'615ULL; // equals unsigned long int

    cout << nameof(ll) << " is " << nameof(long long) << " and equals " << ll << endl;
    cout << nameof(sll) << " is " << nameof(signed long long) << " and equals " << sll << endl;
    cout << nameof(ull) << " is " << nameof(unsigned long long) << " and equals " << ull << endl;
    cout << endl;

    // Counting systems writes (all numbers equals 25)
    int num10 = 25;
    int num16 = 0x19;
    int num8 = 031;
    int num2 = 0b11001;

    cout << nameof(num10) << " equals " << num10 << endl;
    cout << nameof(num16) << " equals " << num16 << endl;
    cout << nameof(num8) << " equals " << num8 << endl;
    cout << nameof(num2) << " equals " << num2 << endl;
    cout << endl;

    // 4 bytes
    float f = 2'000'000;

    cout << nameof(f) << " is " << nameof(float) << " and equals " << f << endl;
    cout << endl;

    // 8 bytes
    double d = 2'000'000'000'000'000;
    long double ld = 2'000'000'000'000'000'000;

    cout << nameof(d) << " is " << nameof(double) << " and equals " << d << endl;
    cout << nameof(ld) << " is " << nameof(long double) << " and equals " << ld << endl;
    cout << endl;

    char c2 = 'A'; // 1 byte
    wchar_t wc = 'A'; // 2 bytes on Windows, 4 bytes on Linux
    //char8_t c8 = 'A'; // 1 byte
    char16_t c16 = 'A'; // 2 bytes
    char32_t c32 = 'A'; // 4 bytes

    cout << nameof(c2) << " is " << nameof(char) << " and equals " << c2 << endl;
    cout << nameof(wc) << " is " << nameof(wchar_t) << " and equals " << wc << endl;
    cout << nameof(c16) << " is " << nameof(char16_t) << " and equals " << c16 << endl;
    cout << nameof(c32) << " is " << nameof(char32_t) << " and equals " << c32 << endl;

    int a {5};
    a += 10; // 15
    a -= 3;  // 12
    a *= 2;  // 24
    a /= 6;  // 4
    a <<= 4; // 64
    a >>= 2; // 16
    std::cout << "a = " << a << std::endl;
}
