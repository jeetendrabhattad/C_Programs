#include <stdio.h>
#include <math.h>

void ArmStrongNumber( const int lb, const int ub)
{
	int number;
	
	for(number = lb ; number <= ub ; number++)
	{
		int no = number;
		int sum_of_cubes = 0;
		while(no)
		{
			sum_of_cubes += pow(no%10, 3);
			no = no / 10;
		}
		
		if(sum_of_cubes == number)
		{
			printf("%d is ArmStrong Number\n", number);
		}
	}	
}

int main()
{
	int lb, ub;
	printf("Enter the range in which to find out ArmStrong Number\n");
	scanf("%d %d", &lb, &ub);
	ArmStrongNumber(lb, ub);
}
