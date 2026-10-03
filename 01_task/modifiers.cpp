#include "modifiers.h"
#include <iostream>

void modifyByValue(int x) {
    std::cout << "Inside modifyByValue:\n";
    std::cout << "Address of x: " << &x << '\n';
    std::cout << "Value of x: " << x << '\n';
    x = 999;
    std::cout << "Result after the change: x = " << x << '\n';
}

void modifyByPointer(int* x) {
    std::cout << "Inside modifyByPointer:\n";
    std::cout << "Address stored in x: " << x << '\n';
    std::cout << "Value pointed to by x: " << *x << '\n';
    *x = 999;
    std::cout << "Result after the change: *x = " << *x << '\n';
}

void modifyByReference(int& x) {
    std::cout << "Inside modifyByReference:\n";
    std::cout << "Address of x: " << &x << '\n';
    std::cout << "Value of x: " << x << '\n';
    x = 999;
    std::cout << "Result after the change: x = " << x << '\n';
}