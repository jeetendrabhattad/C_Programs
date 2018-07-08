#include <stdio.h>
int foo()
{
	printf("foo called\n");
}
int main()
{
	char ch;

	for(ch = 0 ; ch < 200 ; ch++)
	{
		printf("%d\n", ch);
	}
}
