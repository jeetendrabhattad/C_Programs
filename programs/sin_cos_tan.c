#include <stdio.h>
#include <math.h>

//function prototype+definition
void PrintSinCosTan(double *number, int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("\nSin of %lf is %.10lf", number[i], sin(number[i]));
        printf("\nCos of %lf is %.10lf", number[i], cos(number[i]));
        printf("\nTan of %lf is %.10lf", number[i], tan(number[i]));
    }
}

int main()
{
    double number[100];
    int size;

    printf("\nEnter How Many angles you want to enter for finding out sin, cos and tan");
    scanf("%d", &size);

    printf("\nEnter %d numbers:", size);
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%lf", &number[i]);
    }
    PrintSinCosTan(number, size); // function call is made like this
    return 0;
}
