#include <stdlib.h>
#include <stdio.h>

#include "calculator.h"

int Menu()
{
	int choice;

	printf("\nWelcome to Calculator Demo !!!\n");
	printf("1. Add two numbers.\n");
	printf("2. Subtract two numbers.\n");
	printf("3. Multiply two numbers.\n");
	printf("4. Divide two numbers.\n");
	printf("5. Exit.\n");
	printf("Enter your choice:-");
	scanf("%d", &choice);
	return choice;	
}

void SimulateCalculator()
{
	while(1)
	{
		switch(Menu())
		{
			case 1:
			{
				int no1, no2;
				printf("\nEnter 2 numbers to add:-");
				scanf("%d %d", &no1, &no2);
				printf("\n Result of Addition of 2 numbers is:- %d", Add(no1, no2));
			}
			break;	
			case 2:
			{
				int no1, no2;
				printf("\nEnter 2 numbers to add:-");
				scanf("%d %d", &no1, &no2);
				printf("\n Result of Subtraction of 2 numbers is:- %d", Subtract(no1, no2));

			}
			break;	
			case 3:
			{
				int no1, no2;
				printf("\nEnter 2 numbers to add:-");
				scanf("%d %d", &no1, &no2);
				printf("\n Result of Multiplication of 2 numbers is:- %d", Multiply(no1, no2));

			}
			break;	
			case 4:
			{
				int no1, no2;
				printf("\nEnter 2 numbers to add:-");
				scanf("%d %d", &no1, &no2);
				printf("\n Result of Division of 2 numbers is:- %d", Divide(no1, no2));

			}
			break;	
			case 5:
				exit(0);
			default:
				printf("\n Enter Valid Choice !!!");	
				break;
		}
	}
}

int main()
{
	SimulateCalculator();
	return 0;
}
