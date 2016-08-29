#include <stdio.h>


void function1()
{
	int a = 200;// no linkage, local scope, auto storage class, local lifetime.
	static int b = 100;// no linkage, local scope, static storage class, lifetime global.
	b++;
	a++;
	printf("\n Static Storage Class local scope variable value = %d\n", b);
	printf("\n Auto Storage Class Variable value = %d\n", a);
}

int main()
{
//	extern int a;
//	a = 100;
	function1();
	function1();
}
