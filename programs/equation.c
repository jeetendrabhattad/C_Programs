#include <stdio.h>
#include <math.h>

//x+x^2+x^3+....x^n
// 3x+4y=100 :-- input value of y : x = (100-4y)/3
double SolveEquation(int x, int n)
{
    double result = 1;
    for(int i = 1 ; i <=n ; i++)
    {
        double power = pow(x, i);
        double reciprocal = 1.0/power;
        result += reciprocal;
        printf("\nIteration = %d reciprocal (1.0/%f) = %f result = %f", i, power, reciprocal, result);
    }
    return result;
}

int main()
{
    // 1/x^0+1/x^1+1/x^2+1/x^3+....+1/x^n
    int x = 0, n = 0;
    printf("\nEnter the value of x:");
    scanf("%d", &x);
    printf("\nEnter the value of maximum power:");
    scanf("%d", &n);

    double result = SolveEquation(x, n);
    printf("\nResult of Equation (1/%d^0+1/%d^1+....1/%d^%d) = %f", x,x,x,n, result);
    return 0;
}
