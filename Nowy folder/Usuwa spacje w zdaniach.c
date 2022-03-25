
#include <stdio.h>

int main()
{
    char str[100], str1[100];
    printf("Podaj zdanie: ");
    gets(str);
    int i = 0, k = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str1[k]=str[i];
        k++;
        }
        i++;
    }
    str1[k] = '\0';
    puts(str1);
    return 0;
}
