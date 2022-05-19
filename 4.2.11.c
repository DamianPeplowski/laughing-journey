#include <stdio.h>
double iloczynskalarny(double v1[], double v2[], int dlugosc);
int main(void)
{
  double v1[] = {9.3,3.8,1.1,6.7};
  double v2[] = {7.3,2.7,1.9,2.1};
  double wynik = iloczynskalarny(v1,v2,4);
  printf("Wynik: %0.2f\n", wynik);

  return 0;
}
double iloczynskalarny(double v1[], double v2[], int dlugosc)
{
  double suma = 0;
  for (int i = 0; i < dlugosc; i++)
    suma += v1[i] * v2[i];
  return suma;
}