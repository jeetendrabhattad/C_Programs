#include <stdio.h>

//static int iGlobal = 10;

void AccessExternVariable()
{
	printf("Called from another .c file of same process %s %s %d\n", __FILE__, __FUNCTION__, __LINE__);
	// test2.c:8:2: error: ‘iGlobal’ undeclared (first use in this function)
	// cannot access iGlobal defined in test1.c as it is declared as static.
	iGlobal = 101;
	printf("Address of iGlobal is %p\n", &iGlobal);
	PrintGlobal();
}
