#include <stdio.h>
#include <stdlib.h>

void ReallocDemo()
{
	int *pointer = malloc(200*sizeof(int));

	int *reallocPtr = realloc(pointer, 112500*sizeof(int));

	if(pointer == reallocPtr)
	{
		printf("Memory Extended\n");
	}
	else
	{
		printf("New Memory Given\n");
	}

	free(reallocPtr);
}

int main()
{
	ReallocDemo();
}
