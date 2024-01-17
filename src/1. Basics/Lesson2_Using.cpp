//
// Created by vertog on 14.01.2024.
//

#include "Lesson2_Using.h"
#include "iostream"

using std::cout;
using std::endl;

using i = int;
using si = signed int;
using ui = unsigned int;

// Legacy method of define shortcuts
typedef long l;
typedef signed long sl;
typedef unsigned long ul;

void Lesson2_Using::main() {
    i num1 {15};
    ul num2 {91289736};

    cout << num1 << endl;
    cout << num2 << endl;
}
