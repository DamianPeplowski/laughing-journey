
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, j, len, start, koniec;
 
  	printf("\n Podaj zdanie:  ");
  	gets(str);
  	
  	len = strlen(str);
  	koniec = len - 1;
  	
  	printf("\n Podane zdanie w odwrotnym ułozeniu\n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				start = 0;
			}
			else
			{
				start = i + 1;
			}
			for(j = start; j <= koniec; j++)
			{
				printf("%c", str[j]);
			}
			koniec = i - 1;
			printf(" ");				
		} 
	}
	
  	return 0;
}