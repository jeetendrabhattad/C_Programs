#include <stdio.h>

void NonConstantPointerConstantData()
{
	const char* ptr = "Hello\n";
	char *s = "hi";
	printf("Before operation Data is %s\n", ptr);
	// ptr[2] = 'k'; // not valid operation as data is constant
	ptr++; // pointer can be increement/decreement or it can
		// changed to point to other location
	ptr = s;
	printf("After operation Data is %s\n", ptr);
}

void ContantPointerNonConstantData()
{
	char string[] = "Hello";
	char *const ptr = string;
	char *s = "hi";

	printf("Before operation Data is %s\n", ptr);
	// ptr++; // not valid as pointer is constant
	ptr[2] = 'J';
	// ptr = s; // not valid as pointer is constant
	printf("After operation Data is %s\n", ptr);
	
}

void ConstantPointerConstantData()
{
	char string[] = "Hello";
	const char * const ptr = string;

	printf("Before operation Data is %s\n", ptr);
	// ptr[2] = 'J';
	// ptr++;
	// neither data can change nor pointer
}

void NonConstantPointerNonConstantData()
{
	char string[] = "Hello";
	char* ptr = string;

	printf("Before operation Data is %s\n", ptr);
	ptr[2] = 'J';
	ptr++;
	printf("After operation Data is %s\n", ptr);
	// you can change the data as well as pointer
}

void SimulatePointerDeclarations()
{
	NonConstantPointerConstantData();
	ContantPointerNonConstantData();
	ConstantPointerConstantData();
	NonConstantPointerNonConstantData();
}

int main()
{
	SimulatePointerDeclarations();
}
