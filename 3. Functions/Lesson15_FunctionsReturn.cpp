//
// Created by vertog on 16.01.2024.
//

#include <iostream>
#include "Lesson15_FunctionsReturn.h"

int sum(int& n, int& m);
void sum(int& result, int& n, int & m);

void Lesson15_FunctionsReturn::main() {
    int a = 1, b = 2, sum2;
    int sum1 = sum(a, b);
    sum(sum2, a, b);
    std::cout << sum1 << std::endl;
    std::cout << sum2 << std::endl;
}

// that method is better, because in second variant sum2 create empty int variable and then fill it
int sum(int &n, int &m) {
    int result = n + m;
    return result;
}
void sum(int &result, int &n, int &m) {
    result = n + m;
}
