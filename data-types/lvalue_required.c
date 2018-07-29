#include <stdio.h>

int main()
{
    int i = 100;

//lvalue_required.c:9:12: error: lvalue required as left operand of assignment
    //if(100 = i)
    if(100 == i)
        printf("\ni is 100.");
    else
        printf("\ni is not 100");
    return 0;
}
