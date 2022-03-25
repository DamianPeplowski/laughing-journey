/* C example program of strcat() .*/
 
#include<stdio.h>
#include<string.h>
 
int main()
{
    char tytul[5],imie[30],nazwisko[30];
    char iimie[100]={0}; //assign null
     
    printf("Podaj tytuł (Pan./Pani.): "); gets(tytul);
    printf("Podaj imie: "); gets(imie);
    printf("Podaj nazwisko: "); gets(nazwisko);
     
    //create complete name using string concatenate
    strcat(iimie,tytul);
    strcat(iimie," ");
 
    strcat(iimie,imie);
    strcat(iimie," ");
     
    strcat(iimie,nazwisko);
    strcat(iimie," ");
     
    printf("Witam.... %s\n",iimie);
     
    return 0;
}