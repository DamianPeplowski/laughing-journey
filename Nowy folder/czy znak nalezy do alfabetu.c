#include <stdio.h>
int main()
{
    char z;

    
    printf("Podaj znak: ");
  
    scanf("%c",&z);

    if( (z>='a' && z<='z') || (z>='A' && z<='Z'))
        printf("Znak  %c nalezy do alfabetu",z);
    else
        printf("Znak %c nie nalezy do alfabetu",z);

    return 0;
}