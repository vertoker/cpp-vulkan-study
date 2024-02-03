//
// Created by vertog on 03.02.2024.
//

#include "Lesson71_Math.h"
#include "cmath"
#include "iostream"

template<typename T>
void printData(T data) {
    std::cout << data << std::endl;
}

void Lesson71_Math::main() {
    // abs
    printData("abs");
    printData(std::abs(2)); // 2
    printData(std::abs(-3)); // -3
    printData(std::abs(-0.1)); // -0.1
    printData(std::abs(-0)); // 0

    // ceil (bigger or equal integer number in float)
    printData("ceil");
    printData(std::ceil(2)); // 2
    printData(std::ceil(2.3)); // 3
    printData(std::ceil(2.5)); // 3
    printData(std::ceil(2.8)); // 3
    printData(std::ceil(3.0)); // 3

    printData(std::ceil(-3.0)); // -3
    printData(std::ceil(-2.8)); // -2
    printData(std::ceil(-2.5)); // -2
    printData(std::ceil(-2.3)); // -2
    printData(std::ceil(-2)); // -2

    // floor (smaller or equal integer number in float)
    printData("floor");
    printData(std::floor(2)); // 2
    printData(std::floor(2.3)); // 2
    printData(std::floor(2.5)); // 2
    printData(std::floor(2.8)); // 2
    printData(std::floor(3.0)); // 3

    printData(std::floor(-3.0)); // -3
    printData(std::floor(-2.8)); // -3
    printData(std::floor(-2.5)); // -3
    printData(std::floor(-2.3)); // -3
    printData(std::floor(-2)); // -2

    // round (to closer integer number in float)
    // exists lround (for long) and llround (for longlong)
    printData("round");
    printData(std::round(2)); // 2
    printData(std::round(2.3)); // 2
    printData(std::round(2.5)); // 3
    printData(std::round(2.8)); // 3
    printData(std::round(3.0)); // 3

    printData(std::round(-3.0)); // -3
    printData(std::round(-2.8)); // -3
    printData(std::round(-2.5)); // -3
    printData(std::round(-2.3)); // -2
    printData(std::round(-2)); // -2

    // exp - e^x
    printData("exp");
    printData(std::exp(2)); // e^x

    // log - logarithm of x by e
    printData("log");
    printData(std::log(2)); // log(x)

    // log10 - logarithm of x by 10
    printData("log10");
    printData(std::log10(2)); // log10(x)

    // pow - x^y
    printData("pow");
    printData(std::pow(2, 2)); // 4

    // sqrt - √x
    printData("sqrt");
    printData(std::sqrt(2)); // sqrt(x)

    // sin - sinus of x (in radians)
    printData("sin");
    printData(std::sin(0)); // 0

    // cos - cosines of x (in radians)
    printData("cos");
    printData(std::cos(0)); // 1

    // tan - tangents of x (in radians)
    printData("tan");
    printData(std::tan(0)); // 0

    // isinf - return true if num is an infinity
    printData("isinf");
    printData(std::isinf(0)); // 0

    // isnan - return true is num is nan
    printData("isnan");
    printData(std::isnan(0)); // 0
}
