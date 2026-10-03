#include <iostream>
#include "array_utils.h"

void modifyElementsOnly(int* arr, int size) {
    for (int i=0; i<size; i++) {
        *(arr+i)=size;
    }
}

void fakeByValue(int* arr, int size) {
    std::cout << "Address before arr = nullptr: " << arr << std::endl;
    arr = nullptr;
    std::cout << "Address after arr = nullptr: " << arr << std::endl;
}

void reallocateArray(int*& arr, int& size) {
    delete[] arr;
    size = size*2;
    arr = new int[size];
    for (int i=0; i<size; i++) {
        arr[i]=i+1;
    }
}