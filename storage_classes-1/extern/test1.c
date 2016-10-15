#include <stdio.h>
// Non Static Global variable,
// Scope is Global i.e accessible throughout the process.
// storage is extern
// linkage is extern
// lifetime is global
int iGlobal = 20;

// By Default functions have extern storage class.
void PrintGlobal()
{
	printf("iGlobal is %d\n", iGlobal);
}

void DemoExternStorageClass()
{
	PrintGlobal();
	printf("Address of iGlobal is %p\n", &iGlobal);
	AccessExternVariable();
	//PrintGlobal();
}

int main()
{
	DemoExternStorageClass();
	return 0;
}
