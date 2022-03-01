#include <stdio.h>
#include <stdlib.h>

   int main(){
    int i,max,min,rozmiar;

    printf("Podaj rozmiar tabeli : \n");
    scanf("%d",&rozmiar);

    int tab[rozmiar];

     printf("Podaj elementy tabeli:\n");
     for(i = 0; i < rozmiar;  i++){
        scanf("%d", &tab[i]);
     }

    max=tab[0];
    min=tab[0];
    for(i = 0; i < rozmiar; i++){
        printf("Elementy tabeli to: %d\n",tab[i]);

        if(tab[i] > max){
            max = tab[i];
        }
        if(tab[i] < min){
            min = tab[i];
        }
    }

    printf("Najwy¿sza liczba to: %d\n",max);
    printf("Najni¿sza liczba to: %d\n",min);


    return 0;
}
