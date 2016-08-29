#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int SumOfElements(const int * const arr, const int n)
{
	assert(arr != NULL);
	assert(n>0);

	int sum = 0;
	int max = arr[0];
	int min = arr[0];
	for( int i = 0 ; i < n ; i++ )
	{
		sum += arr[i];
		if(arr[i] > max)
		{
			max = arr[i];
		}
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return sum;
}

void CallocDemo()
{
	int *array = NULL;
	unsigned int size;

	printf("Enter the number of elements to sort\n");
	scanf("%d", &size);
	
	array = (int*)calloc(size, sizeof(int));
	
	if( NULL == array )
	{
		printf("Failed to allocate memory\n");
		exit(1);
	}
	printf("Enter elements\n");
	for(int i = 0 ; i < size ; i++ )
	{
		scanf("%d", &array[i]);
	}
	
	printf("Entered elements\n");
	for(int i = 0 ; i < size ; i++ )
	{
		printf("%d \n", array[i]);
	}

	printf("Sum of elements = %d\n", SumOfElements(array, size));
	free(array);
}

int main()
{
	CallocDemo();
	return 0;
}
