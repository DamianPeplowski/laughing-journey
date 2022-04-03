#include <math.h>
#include <stdio.h>

int main() {
    int pote;
    double pod,wynik;
    printf("Wprowadz podstawe: ");
    scanf("%lf", &pod);
    printf("Wprowadz potęge: ");
    scanf("%d", &pote);

    
    wynik = pow(pod, pote);

    printf("%.1lf^%d = %.2lf", pod, pote, wynik);
    return 0;
}