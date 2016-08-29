#include <stdio.h>

void WhileDemo()
{
	int i = 0 ; 
	while( i < 10 )
	{
		printf("\n i = %d", i+1);
		i++;
	}
}

int main()
{
	WhileDemo();
	return 0;
}
