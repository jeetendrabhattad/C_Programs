#include <stdio.h>

void SimulatePointerToArray()
{
	int array[10] = {10,20,30,40,50,60,70,80,90,100};
	int *ptr = array;
	int (*ptrarray)[10] = &array;
	int i = 0;
	printf("%p\n %p\n %p\n", array, ptr, ptrarray);
	for( i = 0 ; i < 10 ; i++ )
	{
		printf("array value = %d\n", array[i]);
		printf("array value using pointer = %d\n", ptr[i]);
		printf("array value using pointer to an array address = %p value = %d\n", ptrarray[i], *(*(ptrarray) + i));
		printf("array value using pointer to an array address = %p value = %d\n", ptrarray[i], (*ptrarray)[i]);
	}
}

int main()
{
	SimulatePointerToArray();
	return 0;
}
