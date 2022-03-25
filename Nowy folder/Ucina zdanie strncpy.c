
 
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str1[30]={0};
    char str2[30]={0};
 
    printf("Podaj zdanie: "); gets(str1);
 

    strncpy(str2,str1,3);
 
    printf("Po ucieciu liter: %s\n",str2);
  
    return 0;
}