//
// Created by vertog on 15.01.2024.
//

#include "Lesson11_PointersMath.h"
#include "iostream"

void Lesson11_PointersMath::main() {
    int n = 10;

    int* pn = &n;
    std::cout << pn << "\t" << *pn << std::endl;

    pn++; // plus byte size of int (4 bytes)
    std::cout << pn << "\t" << *pn << std::endl;

    pn--;
    std::cout << pn << "\t" << *pn << std::endl;

    double d = 10;

    double* pd = &d;
    std::cout << pd << "\t" << *pd << std::endl;

    pd += 2; // plus byte size of double * 2 (16 bytes)
    std::cout << pd << "\t" << *pd << std::endl;

    pd -= 2;
    std::cout << pd << "\t" << *pd << std::endl;

    int a{10};
    int b{23};
    int *pa {&a};
    int *pb {&b};
    auto ab {pa - pb}; // difference in addresses by bytes

    std::cout << pa << "\t" << *pa << std::endl;
    std::cout << pb << "\t" << *pb << std::endl;
    std::cout << ab << std::endl;

    // decrement and increment with prefix and postfix
    // also works with pointers

    ++pa; pa++;
    --pa; pa--;

    ++*pa; *pa++;
    --*pa; *pa--;
}
