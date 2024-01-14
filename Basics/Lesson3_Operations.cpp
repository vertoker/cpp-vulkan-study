//
// Created by vertog on 14.01.2024.
//

#include <iostream>
#include "Lesson3_Operations.h"

void Lesson3_Operations::main() {
    int plus {2+2};
    int minus {2-2};
    int multiplication {2*2};
    int division {2/2};

    int remainder {5%2};

    float num1 {1.23E-4};
    float num2 {3.65E+6};
    float sum {num1+num2};
    // sum equals num1 because mantissa define only
    // 7 digits for storing number accuracy

    float a{1.5}, b{}, c{}, d {-1.5};
    float result { a / b };
    std::cout << a << "/" << b << " = " << result << std::endl;
    result = d / c;
    std::cout << d << "/" << c << " = " << result << std::endl;
    result = b / c;
    std::cout << b << "/" << c << " = " << result << std::endl;
    std::cout << result << " + " << a << " = " << result + a << std::endl;
    std::cout << std::endl;

    // Prefix increment
    int a2 {8};
    int b2 {++a2};
    std::cout << "a = " << a2 << std::endl;  // a2 = 9
    std::cout << "b = " << b2 << std::endl;  // b2 = 9
    // Postfix increment
    int a3 {8};
    int b3 {a3++};
    std::cout << "a = " << a3 << std::endl;  // a3 = 9
    std::cout << "b = " << b3 << std::endl;  // b3 = 8
    // Prefix decrement
    int a4 {8};
    int b4 {--a4};
    std::cout << "a = " << a4 << std::endl;  // a4 = 7
    std::cout << "b = " << b4 << std::endl;  // b4 = 7
    //Postfix decrement
    int a5 {8};
    int b5 {a5--};
    std::cout << "a = " << a5 << std::endl;  // a5 = 7
    std::cout << "b = " << b5 << std::endl;  // b5 = 8

    // Operations priority
    // Brackets ( )
    // ++ (increment) and -- (decrement)
    // * (multiplication), / (division) and % (remainder of division)
    // + (plus) and - (minus)

    // A bit of mathematics tables (BOOL)

    // AND &
    // | a | b | a & b |
    // | 0 | 0 |   0   |
    // | 0 | 1 |   0   |
    // | 1 | 0 |   0   |
    // | 1 | 1 |   1   |

    // OR |
    // | a | b | a | b |
    // | 0 | 0 |   0   |
    // | 0 | 1 |   1   |
    // | 1 | 0 |   1   |
    // | 1 | 1 |   1   |

    // XOR ^
    // | a | b | a ^ b |
    // | 0 | 0 |   0   |
    // | 0 | 1 |   1   |
    // | 1 | 0 |   1   |
    // | 1 | 1 |   0   |

    // NOT !
    // | a | !a |
    // | 0 |  1 |
    // | 1 |  0 |

    bool bit1 = false;
    bool bit2 = true;
    bool bit3 = bit1 & bit2;
    bool bit4 = bit1 | bit2;
    bool bit5 = bit1 ^ bit2;
    bool bit6 = !bit1;

    // A bit of mathematics tables (NUM)

    // COMPLEMENT ~
    // |        a |       ~a |
    // | 00100011 | 11011100 |
    // | 11111111 | 00000000 |

    // LEFT SHIFT <<
    // |                 a | b |            a << b |
    // | 00000000'11010100 | 0 | 00000000'11010100 |
    // | 00000000'11010100 | 1 | 00000001'10101000 |
    // | 00000000'11010100 | 2 | 00000011'01010000 |
    // | 00000000'11010100 | 3 | 00000110'10100000 |

    // RIGHT SHIFT >>
    // |                 a | b |            a >> b |
    // | 00000000'11010100 | 0 | 00000000'11010100 |
    // | 00000000'11010100 | 1 | 00000000'01101010 |
    // | 00000000'11010100 | 2 | 00000000'00110101 |
    // | 00000000'11010100 | 3 | 00000000'00011010 |
}
