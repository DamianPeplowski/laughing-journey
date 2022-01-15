
#include <stdio.h>

int main(void)
{
  int i=0,zakres, suma=0;

  printf("Sume kwadratow ilu pierwszych liczb naturalnych policzyc?\n");
  scanf("%d", &zakres);

  while (i++<zakres)
  {
    suma+=(i*i);
  }
  printf("Suma kwadratow pierwszych %d liczb naturalnych wynosi %d.\n", zakres, suma);
  return 0;
}
