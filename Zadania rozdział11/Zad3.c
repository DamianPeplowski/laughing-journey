#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
int dlugosc, numer, licznik, pozycja;
char zdanie[100];
printf("Wpisz zdanie:\n");
gets(zdanie);

dlugosc=strlen(zdanie);

   for(licznik=0;licznik<dlugosc;licznik++)
   {
            if(isspace(zdanie[licznik]))
                      pozycja=licznik;
   }

   printf("\nPierwszy wyraz tego zdania: ");
   for(numer=0; numer<=pozycja; numer++){
    printf("%c", zdanie[numer]);
   }

  }
