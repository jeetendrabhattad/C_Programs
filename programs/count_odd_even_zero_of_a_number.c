#include <stdio.h>

void CountZeroEvenOdd(int number)
{
	int zero_count = 0, even_count = 0, odd_count = 0;
	int digit;
	while(number)
	{
		digit = number%10;
		switch(digit)
		{
			case 0:
				zero_count++;
			break;
			case 2:
			case 4:
			case 6:
			case 8:
				even_count++;
			break;
			default:
				odd_count++;
			break;
		}
		number = number / 10;
	}
	printf("\n No of Zero's = %d No of even digit's = %d No of odd digit's = %d", zero_count, even_count, odd_count);
}

int main()
{
	int number;
	printf("\n Enter the number of which to count 0 / even / odd:-");
	scanf("%d", &number);
	CountZeroEvenOdd(number);
	printf("\n");
}
