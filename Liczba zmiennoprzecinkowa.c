
#include <stdio.h>

double szescian(double );

int main(void)
{
  double liczba;
  printf("Podaj liczbe, ktora chcesz podniesc do 3 potegi:");
  scanf("%lf", &liczba);
  printf("%lf\n", szescian(liczba));

  return 0;
}

double szescian(double n)
{
  return (n*n*n);
}
