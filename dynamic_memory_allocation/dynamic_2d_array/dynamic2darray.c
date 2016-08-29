#include "dynamic2darray.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int** Create(const int rows, const int cols)
{
	int **matrix;
	printf("In %s\n", __FUNCTION__);

	matrix = (int **)malloc(rows*sizeof(int*));
	assert(matrix!=NULL);
	for(int i = 0 ; i < rows ; i++)
	{
		matrix[i] = (int *)malloc(cols*sizeof(int));
		assert(matrix[i]!=NULL);
	}
	return matrix;
}

void Accept(int **const matrix, const int rows, const int cols)
{
	printf("In %s\n", __FUNCTION__);
	assert(matrix!=NULL);
	assert(rows>0);
	assert(cols>0);

	for( int i = 0 ; i < rows ; i++)
	{
		for(int j = 0 ; j < cols ; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
}

void Display(const int **const matrix, const int rows, const int cols)
{
	printf("In %s\n", __FUNCTION__);
	assert(matrix!=NULL);
	assert(rows>0);
	assert(cols>0);
	for( int i = 0 ; i < rows ; i++)
	{
		for(int j = 0 ; j < cols ; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}

void FreeDynamicArray(int **matrix, const int rows)
{
	printf("In %s\n", __FUNCTION__);
	assert(matrix!=NULL);
	assert(rows>0);
	
	for(int i = 0 ; i < rows ; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
}

int** AddMatrix(const int **const matrix1, const int **const matrix2, const int rows, const int cols)
{
	assert(matrix1!=NULL);
	assert(matrix2!=NULL);
	assert(rows>0);
	assert(cols>0);
	
	int **resultmatrix = Create(rows, cols);
	
	for (int i = 0 ; i < rows ; i++)
	{
		for(int j = 0 ; j < cols ; j++)
		{
			resultmatrix[i][j] = matrix1[i][j]+matrix2[i][j];
		}
	}

	return resultmatrix;
}
