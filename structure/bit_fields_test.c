#include<stdio.h>
int main()
{
    struct value
    {
	    int bit1:1;
	    int bit3:4;
	    int bit4:4;
    }bit={1,2,13};
    printf(" %d %d,%d,%d\n",sizeof(bit),bit.bit1,bit.bit3,bit.bit4);
}   
