#include <stdio.h>

int a = 200;
int b = 100;
extern void foo();
int main()
{
	printf("\nBefore calling foo A = %d B = %d", a, b);
	foo();
	printf("\nAfter foo A = %d B = %d", a, b);
}
