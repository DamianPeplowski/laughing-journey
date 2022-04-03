
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str1[30]={0};
    char str2[30]={0};
 
    printf("Podaj zdanie: "); 
    gets(str2);
 
    strncpy(str1,str2, 5);
 
    printf("%s\n",str1);
  
    return 0;
}