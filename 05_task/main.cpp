#include <iostream>
#include "matrix_utils.h"

int main() {
    int** matrix = createMatrix(3, 4);
    fillMatrix(matrix, 3, 4);
    std::cout << "Matrix: " << std::endl;
    printMatrix(matrix, 3, 4);

    int rows = 3;
    int cols = 4;
    resizeMatrix(matrix,rows,cols,5,6);
    std::cout << '\n';

    std::cout << "Resized Matrix: " << std::endl;
    printMatrix(matrix,rows,cols);
    freeMatrix(matrix, rows);
}