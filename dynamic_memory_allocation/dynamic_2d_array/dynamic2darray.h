#ifndef _DYNAMIC_2D_ARRAY_H
#define _DYNAMIC_2D_ARRAY_H

int** Create(const int rows, const int cols);
void Accept(int **const matrix, const int rows, const int cols);
void Display(const int **const matrix, const int rows, const int cols);
void FreeDynamicArray(int **matrix, const int rows);
int** AddMatrix(const int **const matrix1, const int **const matrix2, const int rows, const int cols);

#endif
