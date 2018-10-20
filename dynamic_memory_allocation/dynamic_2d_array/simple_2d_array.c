#include <stdio.h>
#include <stdlib.h>

void Simple2DArrayDemo()
{
    int **array = NULL;
    int m, n;

    printf("\nEnter dimensions of matrix:");
    scanf("%d%d", &m, &n);

    array = (int**)malloc(m*sizeof(int*));
    for(int i = 0 ; i < m ; i++)
        array[i] = (int*)malloc(n*sizeof(int));

    //accept
    printf("\nEnter %d elements:", m*n);
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
            scanf("%d",&array[i][j]);
    }
    //display
    printf("\nEntered Elements are:\n");
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
            printf("%d\t",array[i][j]);
        printf("\n");
    }

    printf("\nRow wise sum of Entered Elements are:\n");
    for(int i = 0 ; i < m ; i++)
    {
        int sum = 0;
        for(int j = 0 ; j < n ; j++)
            sum += array[i][j];
        printf("\nSum of row elements of row %d is %d\t",i+1, sum);
    }

    for(int i = 0 ; i < m; i++)
        free(array[i]);
    free(array);
}

int main()
{
    Simple2DArrayDemo();
    return 0;
}
