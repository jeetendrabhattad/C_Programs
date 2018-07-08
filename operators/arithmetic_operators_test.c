#include <stdio.h>

int main()
{
	int x = 5%-3;
	printf("\n 2nd operand -ve for modulus operator X = %d \n", x);
	x = -5%3;
	printf("\n 1st operand -ve for modulus operator X = %d \n", x);
	x = -5%-3;
	printf("\n both operand -ve for modulus operator X = %d \n", x);
	x = 5/-3;
	printf("\n 2nd operand -ve for division operator X = %d \n", x);	
	x = -5/3;
	printf("\n 1st operand -ve for division operator X = %d \n", x);	
	x = -5/-3;
	printf("\n both operand -ve for division operator X = %d \n", x);	
}
