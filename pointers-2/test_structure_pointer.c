#include<stdio.h>
int main()
{
    struct value
    {
	    int bit1:2;
	    int bit3:4;
		int k;
	    int bit4:4;
    }bit={1,11,23,13};
	int bit1 = bit.bit1;
	int bit2 = bit.bit3;
	int bit3 = bit.bit4;
	printf("%d %d %d*******\n", bit1, bit2, bit3);
    printf(" %d %d,%d,%d\n",sizeof(bit),bit.bit1,bit.bit3,bit.bit4);
}   
