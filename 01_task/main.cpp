#include <iostream>
#include "modifiers.h"

void demonstrateBasicDifferences() {
    int a = 10;
    std::cout << "Before: a = " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    modifyByValue(a);

    std::cout << "After modifyByValue: a = " << a << std::endl;
    std::cout << '\n';
    std::cout << "Before: a = " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    modifyByPointer(&a);

    std::cout << "After modifyByPointer: a = " << a << std::endl;
    std::cout << '\n';
    std::cout << "Before: a = " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    modifyByReference(a);

    std::cout << "After modifyByReference: a = " << a << std::endl;
}

int main() {
    demonstrateBasicDifferences();
    return 0;
}