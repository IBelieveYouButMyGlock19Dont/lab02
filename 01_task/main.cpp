#include <iostream>
#include "modifiers.h"

void demonstrateBasicDifferences() {
    int a = 10;
    std::cout << "Before: a = " << a << '\n';
    std::cout << "Address of a: " << &a << '\n';
    modifyByValue(a);
    std::cout << "After modifyByValue: a = " << a << "\n\n";
    std::cout << "Before: a = " << a << '\n';
    std::cout << "Address of a: " << &a << '\n';
    modifyByPointer(&a);
    std::cout << "After modifyByPointer: a = " << a << "\n\n";
    std::cout << "Before: a = " << a << '\n';
    std::cout << "Address of a: " << &a << '\n';
    modifyByReference(a);
    std::cout << "After modifyByReference: a = " << a << '\n';
}

int main() {
    demonstrateBasicDifferences();
    return 0;
}