#include <stdio.h>

int swap(char **string1, char **string2)
{
	char *temp = *string1;
	*string1 = *string2;
	*string2 = temp;	
}

int main()
{
	char *string1 = "Jay Shri Ram";
	char *string2 = "Hari om";
	printf("%s %s\n", string1, string2);
	swap(&string1, &string2);
	printf("%s %s\n", string1, string2);
}
