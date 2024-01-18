//
// Created by vertog on 18.01.2024.
//

#include "Lesson19_FunctionsPointers.h"
#include "iostream"

void helloA();
void helloB();
void helloC(int num);
void helloD(int &num);
void helloE(const int *num);

void helloF(void (num)());
void helloG(void (&num)());
void helloH(void (*num)());
void helloI(int (*num)(int num1, int num2));

void what(int &(*f[10])(char, int*()));

void(*message12(bool))();

int add(int &num1, int &num2);
int subtract(int &num1, int &num2);
int multiply(int &num1, int &num2);
int(*operation(int choice))(int&, int&);

void Lesson19_FunctionsPointers::main() {
    void (*message)();
    void (*message2)() = nullptr;
    void (*message3)(int num) = helloC;
    void (*message4)(int &num) = helloD;
    void (*message5)(const int *num) = helloE;

    void (*message6)(void (num)()) = helloF;
    void (*message7)(void (&num)()) = helloG;
    void (*message8)(void (*)()) = helloH;
    void (*message9)(int (*num)(int num1, int num2)) = helloI;
    int num = 123;
    int num2 = 456;

    void (*whatMessage)(int &(*f[10])(char, int*())) = what;

    message = helloA;
    message2 = helloB;

    message();
    message2();
    message3(num);
    message4(num);
    message5(&num);

    message6(message);
    message7(*message);
    message8(message);

    auto hello = message12(true);
    hello();

    int(*opAction)(int&, int&) = operation(1);
    auto opAction2 = operation(2);

    opAction(num, num2);
    opAction2(num, num2);
}

void helloA()
{
    std::cout << "Hello" << std::endl;
}
void helloB()
{
    std::cout << "Hello 2" << std::endl;
}
void helloC(int num)
{
    std::cout << "Hello 3 " << num << std::endl;
}
void helloD(int &num)
{
    std::cout << "Hello 4 " << num << std::endl;
}
void helloE(const int *num)
{
    std::cout << "Hello 5 " << *num << std::endl;
}

void helloF(void (num)()) {
    std::cout << "Hello 6 " << num << std::endl;
}
void helloG(void (&num)()) {
    std::cout << "Hello 7 " << num << std::endl;
}
void helloH(void (*num)()) {
    std::cout << "Hello 8 " << num << std::endl;
}
void helloI(int (*num)(int num1, int num2)) {
    std::cout << "Hello 9 " << num << std::endl;
}

// Its 2-dimensional array of delegates
// Which each of them has next signature
// int& ()(char, int *(*)())
void what(int &(**f)(char, int *(*)())) {

}

void(*message12(bool is))()
{
    if (is) return helloA;
    else return helloB;
}

int add(int &num1, int &num2) {
    return num1 + num2;
}
int subtract(int &num1, int &num2) {
    return num1 - num2;
}
int multiply(int &num1, int &num2) {
    return num1 * num2;
}

int (*operation(int choice))(int&, int&) {
    switch (choice) {
        case 2: return subtract;
        case 3: return multiply;
        default: return add;
    }
}