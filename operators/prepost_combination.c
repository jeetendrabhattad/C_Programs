#include <stdio.h>

int main()
{
    int x = 20;
    int y = x++;
    int z = y++;
    int w = ++x + y++;
    printf("\n%d %d %d %d", x, y, z, w);
    //printf("\n%d %d %d %d", ++x, x++, ++x, x++);
    return 0;
}
