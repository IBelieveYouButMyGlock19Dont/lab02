#include <iostream>
#include "const_utils.h"

int main()
{
    int x = 42;
    std::cout << "value of variable before printValue(&x) call:" << std::endl;
    std::cout << x << std::endl;
    std::cout << "Result of printValue(&x) call:" << std::endl;
    printValue(&x);
    std::cout << "\n";
    x=42;
    std::cout << "value of variable before printValueRef(x) call:" << std::endl;
    std::cout << x << std::endl;
    std::cout << "Result of printValueRef(x) call:" << std::endl;
    printValueRef(x);
    std::cout << "\n";
    x=42;
    std::cout << "value of variable before setValue(&x, newValue) call:" << std::endl;
    std::cout << x << std::endl;
    std::cout << "Result of setValue(&x, newValue) call:" << std::endl;
    setValue(&x, 100);
    std::cout << "\n";
    const int* p1 = &x;
    std::cout << "value of variable before tryModify(p1) call:" << std::endl;
    std::cout << *p1 << std::endl;
    std::cout << "Result of tryModify(p1):" << std::endl;
    tryModify(p1);
    // *p1 = 50;
    // Compilation error: the value cannot be modified through a pointer to const data.
    std::cout << "\n";
    int y = 200;
    int* const p2 = &y;
    // p2 = &x;
    // Compilation error: p2 is a constant pointer, so it cannot be assigned another address.
    *p2 = 300;
    std::cout << "y after *p2 = 300:" << std::endl;
    std::cout <<"y: " << y << std::endl;
    return 0;
}

