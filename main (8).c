

#include <stdio.h>

struct student {
   char *imie,*nazwisko,*adres,*kierunek;;
   int *pesel,*numerlegitymacji;
};
    


int main()
{
    struct student adam;
    adam.imie = "Adam";
    adam.nazwisko="Kowalski";
    adam.adres = "Warszawa";
    adam.pesel = 99019293261;
    adam.kierunek = "Prawo";
    adam.numerlegitymacji = 240033;
    
    printf("Imie:%s, Nazwisko: %s, Adres: %s, Pesel: %d, Kierunek: %s, NrLegitymacji: %d",
    adam.imie,adam.nazwisko,adam.adres,adam.pesel,adam.kierunek,adam.numerlegitymacji);

    return 0;
}
