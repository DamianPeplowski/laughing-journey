#include <stdio.h>

double porownanie(double a, double b);

 double a, b;

 int main()
 {
    printf("Podaj liczbe a: ");
    scanf("%lf", &a);
    printf("Podaj liczbe b: ");
    scanf("%lf", &b);
    
    if(a > b)
    {
        printf("%0.0lf", a);
    }
    if(a < b)
    {
        printf("%0.0lf", b);
    }

    return 0;
 }
 