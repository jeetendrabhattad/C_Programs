#include <stdio.h>

#define MAX( a, b ) (a > b) ? a : b

#define MAX3( a, b, c)  (a > b) ? (MAX( a, c)) : (MAX( b, c))

int main()
{
	printf("Max of 3 numbers is %d \n", MAX3(10, 20, 30));
}
