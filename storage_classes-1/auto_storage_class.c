#include <stdio.h>

float iGlobal = 20.0f;

//iGlobal = 30.0f; // this is treated new definition of type integer and results into conflicting types error.
// we cannot free fall code in C, a code must be written in a block. Globally we can only declare/define variables & functions.
//a = b+c; not allowed

void PrintGlobal()
{
	printf("Global iGLobal = %d\n", iGlobal);
}

void AutoStorageClassDemo()
{
	// All Non Static Local variables & 
	// formal parameters follow following.
	// auto storage class
	// scope - local
	// linkage - no linkage
	int iLocal = 20; 
	int iGlobal; // hides binding of global iGlobal variable

	iGlobal = 40; // this will change local iGlobal.
	printf("iGlobal of function is %d, ilocal is %d\n", iGlobal, iLocal);
	PrintGlobal();
}

int main()
{
	PrintGlobal();
	AutoStorageClassDemo();
	
	return 0;
}
