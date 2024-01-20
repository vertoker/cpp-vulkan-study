//
// Created by vertog on 20.01.2024.
//

#include "Lesson31_Explicit.h"

struct Foo {
    // Single parameter constructor, can be used as an implicit conversion.
    // Such a constructor is called "converting constructor".
    Foo(int x) {}
};
struct Faz {
    // Also a converting constructor.
    Faz(Foo foo) {}
};
// The parameter is of type Foo, not of type int, so it looks like
// we have to pass a Foo.
void bar(Foo foo);

void Lesson31_Explicit::main() {
    // However, the converting constructor allows us to pass an int.
    //bar(42);

    // Also allowed thanks to the converting constructor.
    Foo foo = 42;

    // Error! This would require two conversions (int -> Foo -> Faz).
    //Faz faz = 42;
}
// Prefixing the explicit keyword to the constructor prevents the compiler
// from using that constructor for implicit conversions
// Adding it to the above class will create
// a compiler error at the function call bar(42)
//
// It is now necessary to call for conversion explicitly with bar(Foo(42))