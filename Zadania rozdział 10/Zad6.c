#include <stdio.h>    
     
int main()    
{    
    int tab1[] = {1, 2, 3, 4, 5};    
  
    int d = sizeof(tab1)/sizeof(tab1[0]);    

    int tab2[d];    
  
    for (int i = 0; i < d; i++) {     
  tab2[i] = tab1[i];     
    }      
  
     printf("Elementy tablicy: \n");    
    for (int i = 0; i < d; i++) {     
     printf("%d ", tab1[i]);    
    }    

    printf("\n");    

    printf("Elementy nowej tablicy: \n");    
    for (int i = 0; i < d; i++) {     
        printf("%d ", tab2[i]);    
    }    
    return 0;    
}    