
#include <stdio.h>
int main()
{
    int i, n, j, u;
    char c;
    printf("Podaj znak: \n");
    scanf(" %c", &c);
    printf("Podaj ile razy ma sie powtarzac linia: \n");
    scanf("%d", &n);
    printf("Podaj ile razy znak ma sie wyswietlac w lini: \n");
    scanf("%d", &j);
    

    for (i = 0; i < n; i++)
    {
    
        
        for(u = 1; u <= j; u++) 
	 	{
		  printf("%c ",c);		
		   
		}
		 printf("\n"); 
     
        
    }

    return 0;
}
