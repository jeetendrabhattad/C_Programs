#include <stdio.h>

#define MULTIPLY(a, b) a*b
#define MULTIPLYBRACKETS(a, b) (a)*(b)

int main()
{
#ifdef MULTIPLY_OFF
	printf("Multiply Macro without brackets = %d\n", MULTIPLY(10+2,3+5));
#endif
#if defined MULTIPLY_ON
	printf("Multiply Macro with brackets = %d\n", MULTIPLYBRACKETS(10+2,3+5));
#endif
}
