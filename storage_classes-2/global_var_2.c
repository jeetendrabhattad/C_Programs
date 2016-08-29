#include <stdio.h>

extern int b;
static void foo()
{
	extern int a;
	printf("\n %s A = %d B = %d\n", __FUNCTION__, a, b);
	b = 400;
	a = 501;
	printf("\n %s A = %d B = %d\n", __FUNCTION__, a, b);
}
