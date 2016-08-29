#include <stdio.h>

typedef struct
{
	long double i:96;
	char j:4;
}BITFIELDS_T;

int main()
{
	printf("size of struct is %d\n", sizeof(BITFIELDS_T));
	BITFIELDS_T bitFields = {.i =0, .j=0};
	bitFields.i = 4;
	//bitFields.j = 3;
	printf("I is %d J is %d\n", bitFields.i, bitFields.j);
//	printf("%p\n", &bitFields.i);
}
