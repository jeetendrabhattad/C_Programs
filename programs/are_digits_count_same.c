#include <stdio.h>

int CountOfDigits(int no)
{
    int count = 0;
    while(no)
    {
        count++;
        no = no/10;
    }
    return count;
}

int DigitCount(int no, int digit)
{
    int count = 0;
    while(no)
    {
        int rem = no%10;
        if(rem == digit)
            count++;
        no = no/10;
    }
    return count;
}

int AreDigitsSame(int no1, int no2)
{
    if(no1 == no2)
        return 1;
    if(CountOfDigits(no1) == CountOfDigits(no2))
    {
        int no = no1;
        while(no != 0)
        {
            int digit = no%10;
            int count1 = DigitCount(no1, digit);
            int count2 = DigitCount(no2, digit);
            if(count1 != count2)
                break;
            no = no/10;
        }
        if(no == 0)
            return 1;
    }
    return 0;
}
int main()
{
    int no1, no2;

    printf("Enter 2 Numbers:-");
    scanf("%d%d", &no1, &no2);

    if(AreDigitsSame(no1, no2))
    {
        printf("\n%d & %d contains digits with same frequency.\n", no1, no2);
    }
    else
        printf("\n%d & %d doesn't contains digits with same frequency.\n", no1, no2);
}
