// NIM - Name
// NIM - Name

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int numerik1, numerik2, bolean;
  char ascii;
  float numerik3;

  scanf("%d",&numerik1);
  scanf(" %c",&ascii);
  scanf("%d",&bolean);
  scanf("%d",&numerik2);
  scanf("%f",&numerik3);

  printf("%d\n",numerik1);
  printf("%c\n",ascii);
  printf("%d\n",bolean);
  printf("%d\n",numerik2);
  printf("%.2f",numerik3);

  return 0;
}
