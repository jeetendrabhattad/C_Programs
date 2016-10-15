#include <stdio.h>

// if to an extern declaration a value is speficfied then that declaration is treated as definition.
//extern int iGlobal = 30;

void AccessExternVariable()
{
	extern int iGlobal;
	//compiler will not allow to specify a local variable as extern with initializer
	//extern int iGlobal = 30; 
	printf("Called from another .c file of same process %s %s %d address of iGlobal is %p\n", __FILE__, __FUNCTION__, __LINE__, &iGlobal);
	iGlobal = 101;
	printf("Address of iGlobal is %p\n", &iGlobal);
	PrintGlobal();
}
