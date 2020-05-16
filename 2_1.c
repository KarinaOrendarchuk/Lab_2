#include <stdio.h>
#include <math.h>
 
int a = 0;
int b = 0;
int c1 = 0;
int c2 = 0;
int c3 = 0;
 
int main(void)
{
 
  printf ("a=");
  scanf ("%d", &a);
  printf ("b=");
  scanf ("%d", &b);
 
  int c1_1 = pow(a,3);
  int c1_2 = pow(b,3);
  int c1 = c1_1 * c1_2;
 
  int c2 = fmod(b,a);
  int c3 = b / a;
  int c4 = floor(c3);
 
  printf ("\nДобуток чисел у кубі = %d", c1);
  printf ("\nЗалишок від ділення 2-го числа на 1-е = %d", c2);
  printf ("\nЦіла частину від ділення 2-го числа на 1-е = %d", c4);
 
  return 0;
}
