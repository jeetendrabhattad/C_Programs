#include <stdio.h>

union Test
{
	unsigned int i;
	const int c;
	unsigned char ch;
};

int main()
{
	printf("Size of Union instance would be %d\n", sizeof(union Test));
	union Test t1;
	t1.i = 1400;
	printf("%c...using ch %d using i\n", t1.ch, t1.i);
	printf("const c of union is %d\n", t1.c);
	t1.ch = 48;
	printf("After %c...using ch %d using i\n", t1.ch, t1.i);
	printf("const c of union is %d\n", t1.c);
	
}
