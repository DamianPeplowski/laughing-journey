
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="Świetny pomysł";
    char x='o';
    char *wynik;
    wynik=strchr(str1, x);
    printf("%s", wynik);
    getch ();

    return 0;
}
