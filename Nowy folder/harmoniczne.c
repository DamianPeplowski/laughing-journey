#include <stdio.h>
int main() 
{
    double a, b, H;
    printf("Wprowadz dwie: ");
    scanf("%lf %lf", &a, &b);  
 
   
    H =(( 2 * a * b) / (a + b));

    
    printf("Srednia harmoniczna = %.2lf", H);
    
    return 0;
}