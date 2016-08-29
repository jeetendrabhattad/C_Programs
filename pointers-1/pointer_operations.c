#include <stdio.h>

void PointerOperationsDemo()
{
	char string[] = "Hello";
	char *ptr = string;
	
	printf("Ptr points to %p\n", ptr);
	printf("*ptr++ is %s\n", ptr++);
	// *ptr
	// ptr++
	printf("After expression Ptr points to %p\n", ptr);

	ptr = string;
	printf("*++ptr is %c\n", *++ptr);
	// ++ptr
	// *ptr
	printf("After expression Ptr points to %p\n", ptr);
	
	ptr = string;
	printf("(*ptr)++ is %c\n", (*ptr)++);
	// *ptr
	// (*ptr) i.e value at ptr is increemented by 1.
	printf("After expression Ptr points to %p %c\n", ptr, *ptr);
	
	ptr[0] = 'H'; // making it back to H.
	ptr = string;
	printf("++(*ptr) is %c\n", ++(*ptr));
	printf("After expression Ptr points to %p %c\n", ptr, *ptr);
	
	ptr[0] = 'H'; // making it back to H.
	ptr = string;
	printf("++*++ptr is %c\n", ++*++ptr);
	// ++ptr
	// ++(*ptr)
	printf("After expression Ptr points to %p %c\n", ptr, *ptr);

	string[1] = 'e';
	ptr = string;
	printf("--*ptr++ is %c\n",--*ptr++);
	// --(*ptr)
	// ptr++
	printf("After expression Ptr points to %p %c\n", ptr, *ptr);
}

int main()
{
	PointerOperationsDemo();
}
