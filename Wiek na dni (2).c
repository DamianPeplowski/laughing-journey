#include <stdio.h>
#include <stdlib.h>

int main()
{
        float wiek,wdniach;
    printf("Podaj swoj wiek: ");
    scanf("%f", &wiek);
    wdniach=(wiek*365);
    printf("Twoj wiek w dniach to: %0.0f",wdniach);
    getch();

    return 0;

}
