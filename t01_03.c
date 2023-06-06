// NIM - Name
// NIM - Name

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int X, Y, Z, A, B;

  scanf("%d\n",&X);
  scanf("%d\n",&Y);
  scanf("%d",&Z);

  A = X<<Y;
  B = A==Z;

  printf("%d\n",A);
  printf("%d\n",B);

  return 0;
}
