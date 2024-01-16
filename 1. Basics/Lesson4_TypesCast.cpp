//
// Created by vertog on 14.01.2024.
//

#include <iostream>
#include "Lesson4_TypesCast.h"

void Lesson4_TypesCast::main() {
    // implicit type conversion

    unsigned int age = -25; // implicit
    std::cout << "age = " << age << std::endl;

    bool a = 1;   // true
    bool b = 0;   // false
    bool c = 'g'; // true (char is a number)
    bool d = 3.4; // true

    int e = true;       // 1
    double f = false;   // 0

    int g = 3.4;        // 3
    int h = 3.6;        // 3

    float i = 35005;          // 35005
    double j = 3500500000033; // 3.5005e+012

    unsigned char k = -5;           // 251
    unsigned short l = -3500;       // 62036
    unsigned int m = -50000000;     // 4244967296

    // Types of priority for conversion
    // 1. long double
    // 2. double
    // 3. float
    // 4. unsigned long long
    // 5. long long
    // 6. unsigned long
    // 7. long
    // 8. unsigned int
    // 9. int

    double sum {100.2};
    int hours {8};
    double revenuePerHour {sum / hours};
    std::cout << "Revenue per hour = " << revenuePerHour << std::endl;

    // Safe conversions
    // bool -> char -> short -> int -> double -> long double
    // bool -> char -> short -> int -> long -> long long
    // unsigned char -> unsigned short -> unsigned int -> unsigned long
    // float -> double -> long double

    short a2 = 'g'; // conversion from char to short
    int b2 = 10;
    double c2 = b2; // conversion from int to double
    float d2 = 3.4;
    double e2 = d2; // conversion from float to double
    double f2 = 35; // conversion from int to double

    // explicit type conversion
    // static_cast<type>(value)

    double sum2 {100.2};
    unsigned int hours2 {8};
    // concrete usage for casting
    unsigned int revenuePerHour2 { static_cast<unsigned int>(sum2/hours2) };
    // Legacy C conversion (DO NOT USE IT)
    unsigned int revenuePerHour3 { (unsigned int)(sum2/hours2) };
    // revenuePerHour = 12
    std::cout << "Revenue per hour = " << revenuePerHour<< std::endl;
}
