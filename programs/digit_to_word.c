#include <stdio.h>
void ConvertIntToWord(int digit)
{
	switch(digit)
	{
		case 0:
			printf("zero ");
			break;
		case 1:
			printf("one ");
	 		break;
		case 2:
			printf("two ");
	 		break;
		case 3:
			printf("three ");
	 		break;
		case 4:
			printf("four ");
	 		break;
		case 5:
			printf("five ");
	 		break;
		case 6:
			printf("six ");
	 		break;
		case 7:
			printf("seven ");
	 		break;
		case 8:
			printf("eight ");
	 		break;
		case 9:
			printf("nine ");
	 		break;
		
		default:
			printf("\n Invalid Digit");
		break;
	}
}

int main()
{
	int number;	
	int digit1, digit2, digit3;
	
	printf("\n Enter the 3 digit Number:-");
	scanf("%d",&number);
	
	digit1 = number%10;
	number = number/10;
	digit2 = number%10;
	number = number/10;
	digit3 = number%10;
	number = number/10;
	
	printf("\n Digits in Number are:-");
	printf("\n Hundred's place digit is %d ", digit3);
	ConvertIntToWord(digit3);
	printf("\n Ten's place digit is %d ", digit2);
	ConvertIntToWord(digit2);
	printf("\n Unit's place digit is %d ", digit1);
	ConvertIntToWord(digit1);
	printf("\n");
}







