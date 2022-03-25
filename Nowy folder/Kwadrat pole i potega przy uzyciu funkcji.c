
#include <stdio.h>
void kwadrat(int);
void pole(int);
void odwrocona(int);  

int main()

{
    int numer,ppole;
    
    printf("Podaj numer: ");
    scanf("%d", &numer);
    
    kwadrat(numer);
    
    pole(numer);
    
    odwrocona(numer);
   
}

void kwadrat(int n)
{
    int x=n*n;
    printf("Kwadrat tej liczby to %d\n", x);
}

void pole(int n)
{
   int ppole=n * n;
   printf("Pole kwadratu to: %d\n", ppole);
}

void odwrocona(int n)
{
    int rem, rev = 0;
    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n /10;
    
    }
  printf("Liczba odwrotną jest: %d\n", rev);
}