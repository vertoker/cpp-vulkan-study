//
// Created by vertog on 20.01.2024.
//

#include "Lesson34_Basics.h"
#include "iostream"

double divide(int &a, int &b) {
    if (b) // != 0
        return static_cast<double>(a) / static_cast<double>(b);
    throw "Do not divide by zero";
    //throw 0;// you can throw also not only strings, you can throw any object whatever you want
    //throw std::invalid_argument("Do not divide by zero"); /// and also
}

// with parameter no except you say to the compiler
// which that function will never cause an exception
void print() noexcept {
    std::cout << "Yes" << std::endl;
}

void Lesson34_Basics::main() {
    int x = 500;
    int y = 0;

    // in default, if you aren't handling exception, the compiler will do next things
    // calls std::terminate(), which calls std::abort and finish program
    try // you can't define try without catch
    {
        double z = divide(x, y);
        std::cout << z << std::endl;
        print();
    }
    //catch (...) // that type catches any exception without addition information about error
    catch (const std::string& error_message) // but you can catch a message of the exception and do what you want
    {
        std::cout << error_message << std::endl;
    }
    catch (int code) // and also you can catch several errors with several catchers
    {
        std::cout << code << std::endl;
    }
    // remember: inside catch you also can catch an exception
    std::cout << "The End..." << std::endl;
}
