#include <stdio.h>

struct student
{
	int no;
	char name[20];
};
//register int k;
int main()
{
	register int i;
	unsigned int j = 20;
	int* ptr = &j;
//	register struct student jeetendra;
//	register int a[100];
//	register float f;
//	printf("\n%u", &f);
	printf("\n%d", i);
	
}
