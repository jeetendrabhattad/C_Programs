#include <stdio.h>
#include <stdlib.h>

int Menu()
{
	int choice = 0;
	do
	{
		printf("Bitwise Operators Demo !!!\n");
		printf("1. Turn On Bit.\n");
		printf("2. Turn Off Bit.\n");
		printf("3. Toggle Bit.\n");
		printf("4. Turn Off RightMost 1 bit.\n");
		printf("5. Get N bits from position.\n");
		printf("6. Exit.\n");
		scanf("%d", &choice);
	}while(choice < 0 || choice > 6);

	return choice;
}

int TurnOffBitPosition( const int Number, const int BitPosition )
{
	int x = 1;
	int result = Number;
	x = x << (BitPosition - 1);
	if( x & Number )
	{
		x = ~x;
		result = Number & x;
	}
	return result;
}

int TurnOnBitPosition( const int Number, const int BitPosition )
{
	int x = 1;
	int result = Number;

	x = x << (BitPosition - 1);
	if( !( x & Number ) )
	{
		result = Number | x;
	}
	return result;
}

int ToggleBitPosition( const int Number, const int BitPosition )
{
	int x = 1;
	int result = Number;

	x = x << (BitPosition - 1);

	result = Number ^ x;
	return result;
}

int TurnOffRightMostOneBit( const int Number )
{
	return Number & (Number - 1);
}

int GetNumberOfBitsAfterPosition( int Number, const int NoOfBits, const int Position )
{
	int x = 0;
	x = ~x;
	x = x << NoOfBits;
	x = ~x;

	Number = Number >> ( Position + 1 - NoOfBits );

	return Number & x;
}

void BitwiseOperatorDemo()
{
	while(1)
	{
		int choice = Menu();
		switch( choice )
		{
			case 1:
			{
				int iNumber;
				int iBitPosition;
				int result;
				printf("\nEnter Number:-");
				scanf("%d", &iNumber);
				printf("\nEnter bit position of %d to turn-on:-", iNumber);
				scanf("%d", &iBitPosition);
				result = TurnOnBitPosition( iNumber, iBitPosition );
				printf("\nOriginal Number = %d", iNumber);
				printf("\nResult after turning on position %d is %d\n", iBitPosition, result);
			}
			break;
			case 2:
			{
				int iNumber;
				int iBitPosition;
				int result;
				printf("\nEnter Number:-");
				scanf("%d", &iNumber);
				printf("\nEnter bit position of %d to turn-off:-", iNumber);
				scanf("%d", &iBitPosition);
				result = TurnOffBitPosition( iNumber, iBitPosition );
				printf("\nOriginal Number = %d", iNumber);
				printf("\nResult after turning off position %d is %d\n", iBitPosition, result);
			}
			break;
			case 3:
			{
				int iNumber;
				int iBitPosition;
				int result;
				printf("\nEnter Number:-");
				scanf("%d", &iNumber);
				printf("\nEnter bit position of %d to turn-on:-", iNumber);
				scanf("%d", &iBitPosition);
				result = ToggleBitPosition( iNumber, iBitPosition );
				printf("\nOriginal Number = %d", iNumber);
				printf("\nResult after toggling position %d is %d\n", iBitPosition, result);
			}
			break;
			case 4:
			{
				int iNumber;
				int result;
				printf("\nEnter Number:-");
				scanf("%d", &iNumber);
				result = TurnOffRightMostOneBit( iNumber );
				printf("\nResult after turning off rightmost 1 bit of %d is %d.\n", iNumber, result);
			}
			break;
			case 5:
			{
				unsigned int iNumber;
				int iNoOfBits;
				int iPosition;
				int result;
				printf("\nEnter Number, Number of bits to read, Position from which to start reading:-");
				scanf("%d %d %d", &iNumber, &iNoOfBits, &iPosition);
				result = GetNumberOfBitsAfterPosition( iNumber, iNoOfBits, iPosition );
				printf("\nResult after getting %d bits of %d after position %d is %d.\n", iNoOfBits, iNumber, iPosition, result);
			}
			break;
			case 6:
			{
				exit(0);
			}
		}
	}	
}

int main()
{
	BitwiseOperatorDemo();
	return 0;
}
