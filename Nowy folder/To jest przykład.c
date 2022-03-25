#include <stdio.h>
#include <string.h>

int main()
{

    char c[50] = "To jest";
    char z[50] = " przykład";
 
    strcat(c, z);
    printf(c);

    return (0);
}