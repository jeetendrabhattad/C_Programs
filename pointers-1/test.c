#include <stdio.h>

int main()
{
	int arr[100]; // array of 100 integers
	
	int *ptr1 = arr;
	int *ptr2 = arr+99;

	printf("Address where arr starts %p\n", arr);
	printf("Address where ptr1 points %p\n", ptr1);
	printf("Address where ptr2 points %p\n", ptr2);

	printf("Difference is %d %d\n", ptr1 - ptr2, ptr2 - ptr1);
	// addition of pointers is cummulative
	printf("%x %x ", 3+ptr1 , ptr1 + 3);
	
	// subtraction of pointers is not cummulative
	printf(" %x " , ptr1 - 3);
	// valid operations
	// subtraction of 2 pointers
	// adding an integer to a pointer
	// integer addition to a pointer is commutative
	// subtraction of an integer from a pointer 	
	// relational operators can be used

	// invalid operations
	// subtraction of an integer is not commutative
	// multiplication, modulus, division, addition/subtraction of float
	// shift/bitwise
	// addition of 2 pointers
}
