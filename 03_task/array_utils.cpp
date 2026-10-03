#include "array_utils.h"
#include <iostream>

void fillArray(int* arr, int size) {
    for (int i=0 ; i<=size-1; i++) {
        arr[i]=(i+1)*7;
    }
}