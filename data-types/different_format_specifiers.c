#include <stdio.h>

int main()
{
    char ch;
    int i;
    float f;
    double d;
    unsigned int ui;
    short int si;
    long int li;
    long long int lli;
    long double ld;

    printf("\nEnter character:");
    scanf("%c", &ch);
    printf("\nEnter integer:");
    scanf("%d", &i);
    printf("\nEnter float:");
    scanf("%f", &f);
    printf("\nEnter double:");
    scanf("%lf", &d);
    printf("\nEnter positive integer:");
    scanf("%u", &ui);
    printf("\nEnter short integer:");
    scanf("%hi", &si);
    printf("\nEnter long integer:");
    scanf("%ld", &li);
    printf("\nEnter long long integer:");
    scanf("%lld", &lli);
    printf("\nEnter long double:");
    scanf("%Lf", &ld);

    printf("\nData Entered by you: %c, %d, %f, %lf, %u, %hi, %ld, %lld, %Lf\n", ch, i, f, d, ui, si, li, lli, ld);
    return 0;
}
