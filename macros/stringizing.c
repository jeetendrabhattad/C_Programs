#include <stdio.h>

#define STRINGIZING(expr) printf(#expr " = %d\n", expr)

int main()
{
	STRINGIZING(100/20);
}
