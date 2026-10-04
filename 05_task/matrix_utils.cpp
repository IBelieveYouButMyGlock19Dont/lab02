#include "matrix_utils.h"
#include <iostream>

int** createMatrix(int rows, int cols) {
    int** matrix = new int*[rows];

    for (int i=0; i<rows; i++) {
        matrix[i] = new int[cols];
        for (int j=0; j<cols; j++) {
            matrix[i][j]=0;
        }
    }
    return matrix;
}

void fillMatrix(int** matrix, int rows, int cols) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            matrix[i][j]=i*j;
        }
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void freeMatrix(int** matrix, int rows) {
    for (int i=0; i<rows; i++) {
        delete [] matrix[i];
    }
    delete [] matrix;
}

void resizeMatrix(int**& matrix, int& rows, int& cols,int newRows, int newCols) {
    int** newMatrix = createMatrix(newRows, newCols);
    int oldRows;
    int oldCols;
    if (rows<newRows) {
        oldRows=rows;
    }
    else {
        oldRows=newRows;
    }
    if (cols<newCols) {
        oldCols=cols;
    }
    else {
        oldCols=newCols;
    }
    for (int i=0; i<oldRows; i++) {
        for (int j=0; j<oldCols; j++) {
            newMatrix[i][j]=matrix[i][j];
        }
    }
    freeMatrix(matrix, rows);
    matrix = newMatrix;
    rows = newRows;
    cols = newCols;
}
