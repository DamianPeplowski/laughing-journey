
 
#include <stdio.h>
#include <string.h>

int main()
{
 
    char st[] = "Jakies zdanie o czyms ciekawym";
    char ch = 'e';
    char* val;
 
    val = strrchr(st, ch);
 
    printf("Zdanie po ostatnim  %c to :  %s \n",
           ch, val);
 
    char ch2 = 'm';

    val = strrchr(st, ch2);
 
    printf("Zdanie po ostatnim  %c to :  %s ",
           ch2, val);
 
    return (0);
}