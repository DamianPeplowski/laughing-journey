#include<stdio.h>
int mystrlen(char str[100]);
int main()
{
 char str[100];
 int i, len;
 printf("Podaj ciag znaków:\n");
 gets(str);
 len = mystrlen(str);
 printf("Długośc ciągu znaków: %d", len);
 return 0;
}
int mystrlen(char str[100])
{
 int i, len=0;
 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }
 return(len);
}
