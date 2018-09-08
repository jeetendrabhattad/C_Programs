#include <stdio.h>
#include <limits.h>
long long Tick(long long, long long);
int main()
{
    printf("%ld", LONG_MAX);
    long long res = Tick(100000000, 10000000);
    printf("\n%lld", res);
    res = Tick(10000, 100000);
    printf("\n%lld", res);
    return 0;
}
