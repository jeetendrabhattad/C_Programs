#include <stdio.h>

int main()
{
	int n;
	int i, j;
	
	printf("\n Enter the number of levels to display:-");
	scanf("%d", &n);

	for(i = 1 ; i <= n ; i++)
	{
		for(j = 1 ; j <= n-i ; j++)
			printf("\t");
		for(j = 1 ; j <=i ; j++)
			printf("*\t");
		printf("\n");
	} 
	return 0;
}
