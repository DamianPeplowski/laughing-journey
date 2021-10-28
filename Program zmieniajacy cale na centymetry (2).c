#include <stdio.h>
#include <stdlib.h>

int main()
{
  float cale;
  float centymetry;
  printf("Program przeliczajacy cale na centymetry \n");
  printf("Podaj dlugosc w calach: ");
  scanf("%f", &cale);
  centymetry=cale*2.54;
  printf("Podana dlugosc w centymetrach to: %0.2f",centymetry);

  return 0;
}
