#include <stdio.h>

extern foo();

int main()
{
	foo();
}

int foo()
{
	printf("In Foo\n");
}
