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
		printf("6. Count 1 bits.\n");
		printf("7. Count 0 bits.\n");
		printf("8. Get N Bits from Position P.\n");
		printf("9. Exit.\n");
		scanf("%d", &choice);
	}while(choice < 0 || choice > 9);

	return choice;
}

int CountNoOfOneBits(const int Number)
{
    unsigned int x = 1;
    int count = 0;
    while(x)
    {
        if(x & Number)
            count++;
        x = x << 1;
    }
    return count;
}

int CountNoOfZeroBits(const int Number)
{
    unsigned int x = 1;
    int count = 0;
    while(x)
    {
        if(x & Number == 0)
            count++;
        x = x << 1;
    }
    return count;
}

int GetNBitsFromPosition(const int Number, const int position, const int noOfBits)
{
    int result = 0;
    int x = (1<<noOfBits) - 1;
    x = x << (position - noOfBits);
    result = Number & x;
    result = result>>(position - noOfBits);
    return result;
}
//Exercise 2.6
int SetBits(int number1, int p, int n, int number2)
{
    int x = (1<<n)-1;
    number2_part = number2 & x;

    number1 = TurnOffBits(number1, p, n);

    number2_part = number2_part << (p - n);

    return number1 | number2_part;
}

int TurnOffBitPosition( const int Number, const int BitPosition )
{
	int x = 1;
	x = x << (BitPosition - 1);
	x = ~x;
    return Number & x;
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
                int number;
                printf("Enter Number:-");
                scanf("%d", &number);
                printf("\n Number of 1 bits in given number %d are %d\n", number, CountNoOfOneBits(number));
            }
            break;
            case 7:
            {
                int number;
                printf("Enter Number:-");
                scanf("%d", &number);
                printf("\n Number of 0 bits in given number %d are %d\n", number, CountNoOfOneBits(number));
            }
            break;
            case 8:
            {
                int number;
                int position, noOfBits;
                printf("\nEnter Number:-");
                scanf("%d", &number);
                printf("\nEnter Position:-");
                scanf("%d", &position);
                printf("\nEnter Number of bits:-");
                scanf("%d", &noOfBits);

                printf("\n %d bits from position %d of %d are %d\n",noOfBits, position, number, GetNBitsFromPosition(number, position, noOfBits));
            }
            break;
			case 9:
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
