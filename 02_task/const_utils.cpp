#include "const_utils.h"
#include <iostream>

void printValue(const int* ptr) {
    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << "ptr: " << ptr << std::endl;
}

void printValueRef(const int& value) {
    std::cout << "value: " << value << std::endl;
    std::cout << "&value: " << &value << std::endl;
}

void setValue(int* ptr, int newValue)
{
    *ptr = newValue;
    std::cout << "*ptr: " << *ptr << std::endl;
}

void tryModify(const int* ptr)
{
    std::cout << "*ptr: " << *ptr << std::endl;
}