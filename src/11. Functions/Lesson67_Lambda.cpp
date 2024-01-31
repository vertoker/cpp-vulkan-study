//
// Created by vertog on 31.01.2024.
//

#include "Lesson67_Lambda.h"
#include "functional"
#include "iostream"

class LambdaExample {
public:
    int operator()(int a, int b) { return a + b; }
    // represents lambda
    // []{ std::cout << "Hi" << std::endl; }
};

void print_operations(const int a, const int b, int (*op)(const int, const int)) {
    std::cout << op(a, b) << std::endl;
}

void Lesson67_Lambda::main() {
    // named lambda expression
    auto lambda = [](){ std::cout << "Hi" << std::endl; };
    // you can call it
    lambda();

    // also, you can call it like that
    [](){ std::cout << "Hi" << std::endl; } ();

    // also you can set parameters
    [](const std::string& message){ std::cout << message << std::endl; } ("Hi");
    auto print = [](const std::string& message){ std::cout << message << std::endl; };
    auto print_int = [](const int& message){ std::cout << message << std::endl; };

    // also, you can return something parameters
    auto sum_int { [](const int& a, const int& b){ return a + b; } };
    // also, you can create auto parameters
    auto sum_auto { [](const auto a, const auto b){ return a + b; } };
    // you can declare return
    auto sum_str{ [](const int& a, const int& b)
    -> std::string { return std::to_string(a + b); } };
    print(std::to_string(sum_int(5, 3)));
    print(sum_str(5, 3));

    // ypu can use lambda functions as parameters
    int (*plus)(const int, const int) = { [](const int a, const int b) { return a + b; } };
    int (*minus)(const int, const int) = { [](const int a, const int b) { return a - b; } };
    print_operations(5, 9, plus);
    print_operations(5, 9, minus);

    // with [=] you can use outer scope, but in const
    int n = 10;
    auto add { [=](const int x){ std::cout << x + n << std::endl; } };
    add(4);
    add(5);

    // with [&] you can use outer scope
    auto increment2 = [&]()  { n++; };
    print_int(n);
    increment2();
    print_int(n);

    // with [variable] you can use the outer scope in that variable
    int *np {&n};
    auto increment = [np](){(*np)++;};
    print_int(n);
    increment();
    print_int(n);

    // after mutable
    auto increment3 = [=]() mutable  {
        n++;
    };
    print_int(n);
    increment();
    print_int(n);

    // [&k, l, &m, n] k, m - by link, l, n - by value
    // [=, &m, &n] all - by value, m, n - by link
    // [&, m, n] all - by link, m, n - by value

    // all everything is std::function<>
    std::function<int(int,int)> op;
    op = LambdaExample{};
    print_int(op(9, 23));
}
