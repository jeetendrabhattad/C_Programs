#include <stdio.h>

int main()
{
	int x = 1000;
	char *ch = (char*)&x;
	printf("%d %d\n", x, *ch);
}
