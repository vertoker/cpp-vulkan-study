//
// Created by vertog on 14.01.2024.
//

#include "Lesson5_Constructions.h"
#include "iostream"

void Lesson5_Constructions::main() {
    int a;

    std::cout << "Enter number: ";
    std::cin >> a;

    if (a > 0) std::cout << "positive condition" << std::endl;
    else if (a < 0) std::cout << "negative condition" << std::endl;
    else std::cout << "neutral condition" << std::endl;

    if (a) std::cout << "not 0 condition" << std::endl;
    else std::cout << "0 condition" << std::endl;



    int b;

    std::cout << "Enter number 2: ";
    std::cin >> b;

    switch(b)
    {
        case 1:
        case 2:
        case 3:
        {
            std::cout << "positive condition" << std::endl;
            break;
        }
        case -1:
        case -2:
        case -3:
        {
            std::cout << "negative condition" << std::endl;
            break;
        }
        default:
            std::cout << "no condition" << std::endl;
    }



    int c {1};

    while(c <= 5) {
        std::cout << c;
        c++;
    }
    std::cout << std::endl;

    while(++c <= 5) {
        std::cout << c;
    }
    std::cout << std::endl;

    while(true)
    {
        std::cout << c;
        if (c <= 0) break;
        c--;
    }


    for (int i {1}; i < 5; i++) {
        std::cout << c;
    }
    std::cout << std::endl;

    int d {1};
    for(; d < 5;)
    {
        std::cout << d;
        d++;
    }
    std::cout << std::endl;

    int sum {};
    for (int i {}; i < 6; sum += i++);
    std::cout << sum << std::endl;

    std::cout << std::endl;
    for (int i {1}; i < 10; i++)
    {
        for(int j {1}; j < 10; j++)
        {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;



    for (int n : {1, 2, 3, 4, 5}) {
        std::cout << n;
    }
    std::cout << std::endl;

    for (char ch : "Hello") {
        std::cout << ch;
    }
    std::cout << std::endl;



    int e {5};
    do {
        std::cout << e;
    }
    while (--e > 0);
    std::cout << std::endl;
}
