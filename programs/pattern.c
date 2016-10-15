#include <stdio.h>

void Pattern5(int noOfRows)
{
    int i = 0, j = 0;
    int ch = 65;
    
    /*
        A
        A B
        A B C
        A B C D
    */
    for(i = 1; i <= noOfRows ; i++)
    {
        ch = 65;
        for(j = 1 ; j <=i ; j++)
            printf("%c\t", ch++);
        printf("\n");
    }
    /*
        A B C
        A B
        A
    */
    for(i=noOfRows - 1 ; i >=0 ; i--)
    {
        ch = 65;
        for(j = 1 ; j <=i ; j++)
            printf("%c\t", ch++);
        printf("\n");
    }
}

int Pattern6(int noOfRows)
{
    /*
        A B C D C B A
          A B C B A
            A B A
              A
    */
    int i = 0, j = 0;
    int ch = 65;
    for( i = 1 ; i <= noOfRows; i++)
    {
        for(j = 1; j <= i-1; j++)
            printf("\t");
        ch = 65;
        for(j = 1 ; j <= noOfRows - i; j++)
            printf("%c\t", ch++);
        for(j = 0 ; j <= noOfRows - i ; j++)
            printf("%c\t", ch--);
        printf("\n");
    }
}

int main()
{
    int noOfRows;

    printf("Enter Number of Rows to Print :");
    scanf("%d", &noOfRows);

    Pattern6(noOfRows);
    return 0;
}
