#include <stdio.h>


typedef struct zespolone {
    float re;
    float im;
} zespolone;

zespolone dodawanie(zespolone n1, zespolone n2);

int main() {
    zespolone n1, n2, Wynik;

    printf("Liczba pierwsza \n");
    printf("Element rzeczywisty i urojony: ");
    scanf("%f %f", &n1.re, &n1.im);
    printf("\nLiczba druga \n");
    printf("Element rzeczywisty i urojony  drugiej liczby: ");
    scanf("%f %f", &n2.re, &n2.im);

    Wynik = dodawanie(n1, n2);

    printf("Wynik = %.1f + %.1fi", Wynik.re, Wynik.im);
    return 0;
}
zespolone dodawanie(zespolone n1, zespolone n2) {
    zespolone temp;
    temp.re = n1.re + n2.re;
    temp.im = n1.im + n2.im;
    return (temp);
}