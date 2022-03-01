#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a, b,c;
 printf("Podaj pierwszy numer: ");
    scanf("%d", &a);
 printf("Podaj drugi numer: ");
    scanf("%d", &b);
printf("Podaj trzeci numer: ");
    scanf("%d", &c);

   if(a > b && a > c)
      printf("Pierwszy numer jest najwiekszy");
   else  if(b > a && b > c)
      printf("Drugi numer jest najwiekszy");
    else  if(c > a && c > b)
      printf("Trzeci numer jest najwiekszy");
    else printf("Liczby s¹ równe")  ;

    return 0;
}
