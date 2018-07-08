#include <stdio.h>

int main()
{
    char names[][10] = {"jeetendra", "atharva"};
    char *ptr = &names[0][0];
    char (*ptr1)[10] = &names[0];
    for(int i = 0 ; i < 2 ; i++)
        printf("%s %s\n", ptr++, *ptr1++);
}
