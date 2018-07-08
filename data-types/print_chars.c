#include <stdio.h>

int main()
{
	int ch = 0;
	for(ch = 0 ; ch < 256 ; ch++)
		printf("ch at i(%d) is %c\n", ch, ch);
}
