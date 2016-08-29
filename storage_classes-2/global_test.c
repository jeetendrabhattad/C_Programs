#include <stdio.h>

int main()
{
	extern int i ;
	printf("\n I = %d\n", i);
	{
		i = 2000;
		printf("\n I = %d\n", i);
	}
	printf("\n I = %d\n", i);
}
int i = 200;
