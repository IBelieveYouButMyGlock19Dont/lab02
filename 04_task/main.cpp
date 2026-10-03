#include "array_utils.h"
#include <iostream>

int main() {
    int size = 3;
    int* data = new int[size]{1, 2, 3};

    std::cout << "Initial address:" << std::endl;
    std::cout << data << std::endl;

    std::cout << "\nInitial contents:" << std::endl;
    for (int i=0; i<size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "\nContents and address after calling modifyElementsOnly(data, 3):" << std::endl;

    modifyElementsOnly(data,3);

    std::cout << "\nAddress:" << std::endl;
    std::cout << data << std::endl;

    std::cout << "\nContents:" << std::endl;
    for (int i=0; i<size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "\nCalling fakeByValue(data, 3):" << std::endl;

    fakeByValue(data,3);

    std::cout << "\nExternal data after fakeByValue:" << std::endl;
    std::cout << "Address: " << data << std::endl;

    std::cout << "Contents: ";
    for (int i=0; i<size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "\nCalling reallocateArray(data, size):" << std::endl;

    std::cout << "Address before reallocation: " << data << std::endl;

    reallocateArray(data, size);

    std::cout << "Address after reallocation: " << data << std::endl;

    std::cout << "New size: " << size << std::endl;

    std::cout << "New contents: ";

    for (int i=0; i<size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    delete[] data;
    return 0;
}
