#include <stdio.h>
#include <stdlib.h>

void Display(const int* const array, const int n)
{
	int i;
	for(i = 0; i < n ; i++)
		printf("%d ", array[i]);
	printf("\n");
}

void SimulateMallocCalloc()
{
	int n;
	int *mallocptr, *callocptr;

	printf("Enter number of integers to be allocated:-");
	scanf("%d", &n);
	
	mallocptr = malloc(n*sizeof(int));
	if(NULL == mallocptr)
	{
		printf("Failed to allocate\n");
		exit(1);
	}
	Display(mallocptr, n);

	callocptr = calloc(n, sizeof(int));
	if(NULL == callocptr)
	{
		printf("Failed to allocate\n");
		exit(1);
	}
	Display(callocptr, n);

	printf("\nEnter %d integers\n", n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d", &mallocptr[i]);
		callocptr[i] = mallocptr[i];
	}
	printf("Display by Mallocptr\n");
	Display(mallocptr, n);
	printf("Display by Callocptr\n");
	Display(callocptr, n);
	free(mallocptr);
	free(callocptr);
}

int main()
{
	SimulateMallocCalloc();
}
