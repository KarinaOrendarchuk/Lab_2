#include <stdio.h>
#include <math.h>
 
double a = 5;
double b = 8;
double c = -1;
 
int main(void)
{
 
  double a1 = a - b;
  double a2 = 2*b+c;
  double a3 = a1 / a2;
  double a4 = 1 / a;
  double a5 = a3 + a4;
 
  printf("\ny = %g\n", a5);
 
  return 0;
}
