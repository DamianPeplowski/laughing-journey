#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    num=10;
    int podwojona,kwadrat;
    printf ("Program liczacy konkretna liczbe \n");
    podwojona=(num*2);
    kwadrat=pow(num, 2);

    printf ("Liczba ktora bedzie liczona %d \n",num);
    printf ("Podwojona liczba to: %d \n",podwojona);
    printf ("Kwadrat tej liczby to: %d \n",kwadrat);


    return 0;
}
