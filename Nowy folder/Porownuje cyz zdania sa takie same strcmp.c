/* C example program of strcmp() and strcmpi().*/
#include<stdio.h>
#include<string.h>
 
int main()
{
    char str1[30];
    char str2[30];
 
    printf("Podaj zdanie1: "); gets(str1);
    printf("Podaj zdanie2: "); gets(str2);
     
    // strcmp
    printf("Uzywajac strcmp:\n");
    if(strcmp(str1,str2)==0)
        printf("Zdania sa takie same.\n");
    else
        printf("Zdania nie sa takie same.\n");
 
    //strcmp
    printf("Uzywajac strcmpi:\n");
    if(strcmp(str1,str2)==0)
        printf("Zdania sa takie same.\n");
    else
        printf("Zdania nie sa takie same.\n");
         
    return 0;
}