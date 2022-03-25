/*C program to count uppercase and lowercase 
characters in a string.*/

#include <stdio.h>

int main()
{
    char str[100];
    int male, duze;
    int licz;

    
    male = duze = 0;

    printf("Podaj zdanie: ");
    gets(str);

    for (licz = 0; str[licz] != NULL; licz++) {

        if (str[licz] >= 'A' && str[licz] <= 'Z')
            duze++;
        else if (str[licz] >= 'a' && str[licz] <= 'z')
            male++;
    }

    printf("Wszystkie duze litery: %d, Wszystkie male litery: %d", duze, male);

    return 0;
}