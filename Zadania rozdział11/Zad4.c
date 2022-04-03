
#include <stdio.h>
#include <string.h>

int main()
{
 
    char st[] = "Litwo ojczyzno moja ty jestes jak zdrowie";
    char ch = 'e';
    char* val;
 
    char ch2 = 'm';

    val = strrchr(st, ch2);
 
    printf("Zdanie po ostatnim  %c to :  %s ",
           ch2, val);
 
    return (0);
}