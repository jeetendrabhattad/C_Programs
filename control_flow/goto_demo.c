#include <stdio.h>

void GotoDemo()
{
	int choice;
	
	printf("\n Enter Choice:-");
	scanf("%d", &choice);
	
	if(choice == 1)  goto L1 ;
	if(choice == 2)  goto L2 ;
	if(choice == 3)  goto L3 ;
	goto L4;

L1:
	printf("\n Choice Entered is 1.");
	goto L4;
L2:
	printf("\n Choice Entered is 2.");
	goto L4;
L3:
	printf("\n Choice Entered is 3.");

L4:
	printf("\n Bye");
}

int main()
{
	GotoDemo();
	return 0;
}
