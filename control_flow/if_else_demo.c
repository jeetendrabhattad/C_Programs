#include <stdio.h>

void IfElseDemo()
{
	int choice;
	
	printf("\nEnter Choice:-");
	scanf("%d", &choice);

	if(choice == 1)
		printf("\n You entered 1.");
	else if(choice == 2)
		printf("\n You entered 2.");
	else if(choice == 3)
		printf("\n You entered 3.");
	//	
}
int main()
{
	IfElseDemo();
	return 0;
}
