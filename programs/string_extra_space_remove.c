#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RemoveDuplicateConsecutiveCharacter(char * input_string, char *output_string, char ch)
{
	while(*input_string)
	{
		if(*input_string == ch)
		{
			//"h   n    n"
			while(*++input_string == ch);
			*output_string++ = ch;
		}
		*output_string++ = *input_string++;
	}
	*output_string = '\0';
}

int main()
{
	char *input_string = NULL;
	char *output_string = NULL;
	int length = 80;
	printf("\nEnter Length & string:-");
	scanf("%d\n",&length);
	input_string = (char*)malloc(length);
	output_string = (char*)malloc(length);
	// null check
	fflush(stdout);
	fflush(stdin);
	getline(&input_string, &length, stdin);
	printf("\nInput string is %s", input_string);
	RemoveDuplicateConsecutiveCharacter(input_string, output_string, ' ');
	printf("\nOutput string is %s %d", output_string, strlen(output_string));
	output_string = realloc(output_string, strlen(output_string));
	free(input_string);
	free(output_string);
}
/*
 jeetendra@jeetendra-300E4Z-300E5Z-300E7Z:~/pre-placement$ ./a.out 

 Enter Length & string:-10
 a          fafda

 Input string is a          fafda

 Output string is a fafda
 */
