#include "complex.h"
#include <stdio.h>

void SimulateComplex()
{
    COMPLEX_T c1 = {.iReal = 1, .iImag = 2};
    COMPLEX_T c2 = {.iReal = 2, .iImag = 3};
    COMPLEX_T c3 = Add(c1, c2);
    printf("C3 : real %d + imag %d\n", c3.iReal, c3.iImag);
    //menu driven 
}
int main()
{
    SimulateComplex();
    return 0;
}
