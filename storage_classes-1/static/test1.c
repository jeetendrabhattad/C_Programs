#include <stdio.h>
// Static Global variable,
// Scope is File i.e accessible throughout only this file.
// storage is static
// linkage is intern
// lifetime is global
// cannot be accessed in any other file of same process.
static int iGlobal = 20;

//cannot be called from any other .c file.
static void StaticFunction()
{
	printf("Static Function\n");
}

// By Default functions have extern storage class.
void PrintGlobal()
{
	printf("iGlobal is %d\n", iGlobal);
	StaticFunction();
}

//formal parameter as a static variable or extern
void StaticLocalVariable( )
{
	// static local variable
	// SCOPE is local, memory is given once.
	// STORAGE is static
	// LINKAGE is no linkage
	// declaration will be executed when first time called.
	static int iLocalStatic = 50;
	int iLocal = 100;
	// value of static variable will be persisted across function calls.
	iLocalStatic++;
	iLocal++;
	
	printf("%d %d\n", iLocalStatic, iLocal);
	printf("%p %p\n", &iLocalStatic, &iLocal);
}

void DemoStaticStorageClass()
{
	PrintGlobal();
	printf("Address of iGlobal is %p\n", &iGlobal);
	AccessExternVariable();
	PrintGlobal();
}

int main()
{
#ifdef GLOBAL_STATIC_DEMO
	DemoStaticStorageClass();
#else
	StaticLocalVariable();
	StaticLocalVariable();
	StaticLocalVariable();
	StaticLocalVariable();
#endif
	return 0;
}
