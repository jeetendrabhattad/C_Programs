#include <stdio.h>

int main()
{
	int i = 0;
	int j = 10;
	int c = 0;

//	printf("%d %d %d %d\n", ++i, ++i, ++i, i++);
	if(i && j || ++c)
	; // null statement
	printf(" i = %d j = %d c = %d\n", i, j, c);
	return 0;
}
