#include <iostream>
#include "array_utils.h"
#include <iomanip>

int main() {
    int staticArr[5];
    int* dynamicArr = new int[5];
    fillArray(staticArr,5);
    fillArray(dynamicArr,5);
    // Table for static array:
    std::cout << "Static array";
    std::cout << '\n';
    std::cout << '\n';
    std::cout << std::setw(8) << "i"
              << std::setw(12) << "Value"
              << std::setw(22) << "&arr[i]"
              << std::setw(22) << "(arr + i)"
              << std::setw(15) << "Difference"
              << std::endl;
    std::cout << std::setw(8) << "0"
              << std::setw(12) << staticArr[0]
              << std::setw(22) << &staticArr[0]
              << std::setw(22) << (staticArr + 0)
              << std::setw(15) << "-"
              << std::endl;
    std::cout << std::setw(8) << "1"
              << std::setw(12) << staticArr[1]
              << std::setw(22) << &staticArr[1]
              << std::setw(22) << (staticArr + 1)
              << std::setw(15) << (&staticArr[1] - &staticArr[0])*sizeof(int)
              << std::endl;
    std::cout << std::setw(8) << "2"
              << std::setw(12) << staticArr[2]
              << std::setw(22) << &staticArr[2]
              << std::setw(22) << (staticArr + 2)
              << std::setw(15) << (&staticArr[2] - &staticArr[1])*sizeof(int)
              << std::endl;
    std::cout << std::setw(8) << "3"
              << std::setw(12) << staticArr[3]
              << std::setw(22) << &staticArr[3]
              << std::setw(22) << (staticArr + 3)
              << std::setw(15) << (&staticArr[3] - &staticArr[2])*sizeof(int)
              << std::endl;
    std::cout << std::setw(8) << "4"
              << std::setw(12) << staticArr[4]
              << std::setw(22) << &staticArr[4]
              << std::setw(22) << (staticArr + 4)
              << std::setw(15) << (&staticArr[4] - &staticArr[3])*sizeof(int)
              << std::endl;
    std::cout << '\n';
    // Table for Dynamic array:
    std::cout << "Dynamic array";
    std::cout << '\n';
    std::cout << '\n';
    std::cout << std::setw(8) << "i"
              << std::setw(12) << "Value"
              << std::setw(22) << "&arr[i]"
              << std::setw(22) << "(arr + i)"
              << std::setw(15) << "Difference"
              << std::endl;
    std::cout << std::setw(8) << "0"
              << std::setw(12) << dynamicArr[0]
              << std::setw(22) << &dynamicArr[0]
              << std::setw(22) << (dynamicArr + 0)
              << std::setw(15) << "-"
              << std::endl;
    std::cout << std::setw(8) << "1"
              << std::setw(12) << dynamicArr[1]
              << std::setw(22) << &dynamicArr[1]
              << std::setw(22) << (dynamicArr + 1)
              << std::setw(15) << (&dynamicArr[1] - &dynamicArr[0])*sizeof(int)
              << std::endl;
    std::cout << std::setw(8) << "2"
              << std::setw(12) << dynamicArr[2]
              << std::setw(22) << &dynamicArr[2]
              << std::setw(22) << (dynamicArr + 2)
              << std::setw(15) << (&dynamicArr[2] - &dynamicArr[1])*sizeof(int)
              << std::endl;
    std::cout << std::setw(8) << "3"
              << std::setw(12) << dynamicArr[3]
              << std::setw(22) << &dynamicArr[3]
              << std::setw(22) << (dynamicArr + 3)
              << std::setw(15) << (&dynamicArr[3] - &dynamicArr[2])*sizeof(int)
              << std::endl;
    std::cout << std::setw(8) << "4"
              << std::setw(12) << dynamicArr[4]
              << std::setw(22) << &dynamicArr[4]
              << std::setw(22) << (dynamicArr + 4)
              << std::setw(15) << (&dynamicArr[4] - &dynamicArr[3])*sizeof(int)
              << std::endl;
    std::cout << '\n';
    std::cout << '\n';
    std::cout << "sizeof(staticArr) = " << sizeof(staticArr) << " bytes" << std::endl;
    std::cout << "sizeof(dynamicArr) = " << sizeof(dynamicArr) << " bytes" << std::endl;
    delete[] dynamicArr;
    return 0;
}