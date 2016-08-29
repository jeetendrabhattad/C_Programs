#include <stdio.h>

void SwitchDemo()
{
	int choice;
	
	printf("\nEnter Choice:-");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("\n You entered 1.");
			break;
		case 2:
			printf("\n You entered 2.");
			break;
		case 3:
			printf("\n You entered 3.");
			break;
		case 4:
			printf("\n You entered 4.");
			break;
		default:
			printf("\n Enter valid number");
			break;
	}
}

int main()
{
	SwitchDemo();
	return 0;
}
