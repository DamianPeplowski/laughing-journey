
#include<stdio.h>

// Tablica początkowa: 9, 5, 4, 0, 7, 6, 8, 1, 2, 3
//
// Krok 0: 0,|9, 7, 6, 4, 5, 2, 3, 8, 1
// Krok 1: 0, 1,|7, 6, 4, 5, 2, 3, 8, 9
// Krok 2: 0, 1, 2,|6, 4, 5, 7, 3, 8, 9
// Krok 3: 0, 1, 2, 3,|4, 5, 7, 6, 8, 9
// Krok 4: 0, 1, 2, 3, 4,|5, 7, 6, 8, 9
// Krok 5: 0, 1, 2, 3, 4, 5,|7, 6, 8, 9
// Krok 6: 0, 1, 2, 3, 4, 5, 6,|7, 8, 9
// Krok 7: 0, 1, 2, 3, 4, 5, 6, 7,|8, 9
// Krok 8: 0, 1, 2, 3, 4, 5, 6, 7, 8,9

int main()

{
    //Szukamy najmniejszego elementu w zbiorze i zamieniamy go z 
    //elementem stojącym na pozycji pierwszej. Następnie szukamy znowu elementu 
    //najmniejszego w zbiorze pominiętym o pierwszy element i wstawiamy go 
    //na pozycję drugą. Czynności powtarzamy do momentu otrzymania 
    //jednoelementowego podzbioru.
    
    int i,j,n,min,zm;
    printf("Podaj wielkosc tablicy: ");
    scanf("%d",&n);
    int tab[n];

    printf("Podaj elementy tablicy: \n");
    for(i=0;i<n;i++)
        scanf("%d",&tab[i]);

    for(i=0;i<n-1;i++)
    {
     //Program znajduje najmniejszy element tablicy 
     //w nieposortowanej czesci
      min=i;
      for(j=i+1;j<n;j++)
      {
        if(tab[j]<tab[min])
        min=j;
      }
      //Jesli element nie jest mniejszy od poprzedniego 
      //to zastepuje go 
      if (min !=i)
      {
          zm=tab[i];
          tab[i]=tab[min];
          tab[min]=zm;
      }

    }
    //Wypisuje posortowana tablice
    printf("Posortowana tablica: \n");
    for(i=0;i<n;i++)
    printf("%d",tab[i]);
    return 0;
}
