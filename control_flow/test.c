#include <stdio.h>

int main()
{
	unsigned int x = 1;
	char *ptr = &x;
	printf("Enter number \n");
	scanf("%d", &x);
	printf("x =%d***", x);
	printf("Character at LSB is %c\n", *ptr);
	ptr++;
	printf("Character at LSB is %c\n", *ptr);
	ptr++;
	printf("Character at LSB is %c\n", *ptr);
	ptr++;
	printf("Character at LSB is %c\n", *ptr);

	if(x == 'A')
		printf("\nits Character A\n");
	return 0;
}
