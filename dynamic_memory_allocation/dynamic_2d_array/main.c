#include "dynamic2darray.h"
#include <stdio.h>

void SimulateDynamicMatrixOperations()
{
	int **matrix1, **matrix2, **resultmatrix;
	int rows1, cols1, rows2, cols2;
	
	printf("\nEnter dimensions for matrix1:-");
	scanf("%d%d", &rows1, &cols1);
	printf("Creating Matrix1 !!!\n");
	matrix1 = Create(rows1, cols1);

	printf("\nEnter dimensions for matrix2:-");
	scanf("%d%d", &rows2, &cols2);
	printf("Creating Matrix2 !!!\n");
	matrix2 = Create(rows2, cols2);

	printf("Enter values for Matrix1 !!!\n");
	Accept(matrix1, rows1, cols1);
	printf("Enter values for Matrix2 !!!\n");
	Accept(matrix2, rows2, cols2);

	printf("Matrix 1 is \n");
	Display((const int ** const)matrix1, rows1, cols1);
	printf("Matrix 2 is \n");
	Display((const int ** const)matrix2, rows2, cols2);
	
	printf("Adding 2 matrices !!!\n");
	resultmatrix = AddMatrix((const int ** const)matrix1, (const int ** const)matrix2, rows1, cols1);
	printf("Result of Addition is ....\n");
	Display((const int ** const)resultmatrix, rows1, cols1);

	printf("Freeing Matrix 1 !!!\n");
	FreeDynamicArray(matrix1, rows1);	
	printf("Freeing Matrix 2 !!!\n");
	FreeDynamicArray(matrix2, rows2);	
	printf("Freeing ResultMatrix !!!\n");
	FreeDynamicArray(resultmatrix, rows2);	
}

int main()
{
	SimulateDynamicMatrixOperations();
	return 0;
}
