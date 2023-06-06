// NIM - Name
// NIM - Name

#include <stdio.h>

int main(int _argc, char **_argv)
{
  float a, b, c, d, e, total, average;

  scanf("%f\n",&a);
  scanf("%f\n",&b);
  scanf("%f\n",&c);
  scanf("%f\n",&d);
  scanf("%f",&e);

  total = a + b + c + d + e;
  average = total/5;

  printf("%.3f\n",total);
  printf("%.3f",average);


  return 0;
}
