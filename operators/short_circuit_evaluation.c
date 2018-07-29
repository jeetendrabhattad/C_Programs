#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int d;
	printf("\n Short Circuit Evaluation Test\n");
	//d = a || ++c && b;
	//if(a && ++c || ++b)
	if(a || ++c && ++b)
	{
		printf("True\n");
		printf(" %d %d %d\n", a,b,c);	
	}
	else
	{
		printf("False\n");
		printf(" %d %d %d\n", a,b,c);	
	}
}
