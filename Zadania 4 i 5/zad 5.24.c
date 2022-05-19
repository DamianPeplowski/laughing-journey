#include<stdio.h>
 
void kopiuj(char*, char*);
 
main()
{
    char s[100], tab[100];
    printf("Podaj słowo: \n");
    gets(s);
    kopiuj(tab, s);
    printf("Tablica: \"%s\"\n", tab);
    return 0;
}
 
void kopiuj(char *tab, char *s)
{
   while(*s)
   {
      *tab = *s;
      s++;
      tab++;
   }
   *tab = '\0';
}
