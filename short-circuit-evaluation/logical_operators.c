#include <stdio.h>

int main()
{
	int i = 10, j = 20, k = 30;
	int l;
	if(i++ || ++j && k++)
	{
		printf("i = %d j = %d k = %d\n", i, j, k);
	}
	l = i++ || ++j && k++;
	printf("i = %d j = %d k = %d l = %d\n", i, j, k, l);
}
