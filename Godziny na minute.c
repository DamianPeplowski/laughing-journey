#include <stdio.h>

#define MWG 60

int main(void)
{
  int minuty, gg;

  printf("Podaj liczbe minut: \n");
  scanf("%d", &minuty);
  gg=0;
  while ((minuty/MWG)>0)
  {
    gg+=1;
    minuty-=MWG;
  }
  printf("%d:%d\n", gg, minuty);

  return 0;
}
