#include <stdio.h>

void stringReverse(char* string)
{
	if(*string != '\0')
		stringReverse(string+1);
	printf("%c",*string);
}

int main()
{
	char* str = "Jeetendra";
	stringReverse(str);
	printf("\n");
}
