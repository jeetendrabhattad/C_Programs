// Little Endian & Big Endian.
#include <stdio.h>

int main()
{
	int i = 1400;
	char* ptr = &i;
	
	printf("Start Address of i is %p\n", &i);
	printf("Start Address of i using char pointer is %p value is %c\n", ptr, *ptr);
	printf("Start Address of i using char pointer is %p value is %d\n", ptr, *ptr);
	ptr++;	
	printf("Next Address of i using char pointer is %p value is %c\n", ptr, *ptr);
	printf("Next Address of i using char pointer is %p value is %d\n", ptr, *ptr);
	ptr++;	
	printf("Next Address of i using char pointer is %p value is %c\n", ptr, *ptr);
	printf("Next Address of i using char pointer is %p value is %d\n", ptr, *ptr);
	ptr++;	
	printf("Next Address of i using char pointer is %p value is %c\n", ptr, *ptr);
	printf("Next Address of i using char pointer is %p value is %d\n", ptr, *ptr);
	ptr++;	

}
