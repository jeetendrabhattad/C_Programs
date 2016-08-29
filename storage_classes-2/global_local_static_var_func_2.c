#include <stdio.h>

int k = 10;

int foo()
{
	bar();
	printf("\n foo:k = %d", k);
}

static int foo2()
{
	printf("\n foo2 static function");
}
