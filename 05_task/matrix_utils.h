#ifndef LAB02_MATRIX_UTILS_H
#define LAB02_MATRIX_UTILS_H

int** createMatrix(int rows, int cols);
void fillMatrix(int** matrix, int rows, int cols);
void printMatrix(int** matrix, int rows, int cols);
void freeMatrix(int** matrix, int rows);
void resizeMatrix(int**& matrix, int& rows, int& cols, int newRows, int newCols);

#endif //LAB02_MATRIX_UTILS_H
