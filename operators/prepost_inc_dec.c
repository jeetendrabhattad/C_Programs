#include <stdio.h>

int main()
{
	int i = 10;
	int j = 20;
	printf("Pre/Post Increement Decrement Test\n");
	j = i++;
	printf("i = %d j = %d\n", i, j);
	j++ = i;

}
