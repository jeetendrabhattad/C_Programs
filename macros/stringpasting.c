#include <stdio.h>

#define ADD(X,a,b) ADD##X(a,b)

int ADDint (int a, int b)
{
  return a + b;
}

float ADDfloat (float a, float b)
{
  return a + b;
}

int
main ()
{
  printf ("Result of Addition of 2 integers:- %d\n",ADD (int, 10, 20));
  printf ("Result of Addition of 2 floats:- %f\n", ADD (float, 10.12, 22.13));
}
