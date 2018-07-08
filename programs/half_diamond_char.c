#include <stdio.h>

void half_diamond_chars(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        int ch = 64;
        int count = 1;
        for(int j = 1 ; j <= n-i ; j++)
            printf("\t");
        for(int j = 1 ; j <= 2*i - 1 ; j++)
        {
            printf("%c\t", ch+count);
            if(j >= i)
                count--;
            else
                count++;
        }
        printf("\n");
    }
}

int main()
{
    half_diamond_chars(5);
    return 0;
}
