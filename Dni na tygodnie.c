
#include <stdio.h>

int main(void)
{
  int dni;

  printf("Podaj liczbe dni: \n");
  scanf("%d", &dni);

  printf("%d tygodni, %d dni.\n", dni/7, dni%7);

  return 0;
}
