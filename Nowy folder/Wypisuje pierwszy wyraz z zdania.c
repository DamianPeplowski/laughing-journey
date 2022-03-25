#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
int dlugosc, numer, licznik, pozycja;
char zdanie[100];
printf("Wpisz zdanie:\n");
gets(zdanie);
//strlen();
//Returns the length of the given null-terminated byte string, that is, the number of characters in a character array
dlugosc=strlen(zdanie); 
    //Counts each position until it finds a space
   for(licznik=0;licznik<dlugosc;licznik++)
   {
            if(isblank(zdanie[licznik]))
                      pozycja=licznik;
   }
   //Prints each character until the counter reaches the position number given by the counter variable
   printf("\nPierwszy wyraz tego zdania: ");
   for(numer=0; numer<pozycja; numer++){
    printf("%c", zdanie[numer]);
   }

  }