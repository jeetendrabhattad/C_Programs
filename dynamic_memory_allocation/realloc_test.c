#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void SimulateRealloc()
{
	int n;
	int resize;
	int *mallocptr, *reallocptr;
	
	printf("Enter number of integers to allocate:-\n");
	scanf("%d", &n);

	mallocptr = (int*)malloc(n*sizeof(int));	
	assert(mallocptr!=NULL);
	
	printf("How many more to allocate:-\n");
	scanf("%d", &resize);
	reallocptr = (int*)realloc(mallocptr, (n+resize)*sizeof(int));
	assert(reallocptr!=NULL);
	
	printf("Address at which mallocptr is pointing is %p\n", mallocptr);
	printf("Address at which reallocptr is pointing is %p\n", reallocptr);

	if(mallocptr == reallocptr)
	{
		printf("Memory Extended\n");
	}
	else
	{
		printf("Allocated New Memory\n");
	}

	free(reallocptr);
//	if below line un-commented it will give "double free or corruption error"
//	free(mallocptr); 
}

int main()
{
	SimulateRealloc();
	return 0;
}
