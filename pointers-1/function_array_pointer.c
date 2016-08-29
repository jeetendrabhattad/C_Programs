#include <stdio.h>

int add(int a, int b)
{
	printf("%d %d %s\n",a,b,__FUNCTION__);
}

int sub(int a, int b)
{
	printf("%d %d %s\n",a,b,__FUNCTION__);
}

int mul(int a, int b)
{
	printf("%d %d %s\n",a,b,__FUNCTION__);
}

int main()
{
	int (*ptr[3])();
	ptr[0] = add;
	ptr[1] = sub;
	ptr[2] = mul;

	ptr[0](1,2);
	ptr[1](2,3);
	ptr[2](3,4);
}
