#include <stdlib.h>
#include <stdio.h>

int ** alokuj(unsigned int n, unsigned int m){
    int ** t=malloc(n*sizeof(int*));
    int i;
    for(i =0; i<n; i++)
    t[i]=malloc(m*sizeof(int));
    return t;
}

void zw(unsigned int n, unsigned int m, int **t){
    int i;
    for(i = 0; i<n; i++)
    free(t[i]);
    free(t);
}


int tabela(unsigned int n, unsigned int m){
    int* ptr = malloc((n * m) * sizeof(int));
    for (int i = 0; i < n * m; i++)
        ptr[i] = i + 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", ptr[i * m + j]);
        printf("\n");
    }
    free(ptr);
 
    return 0;
}



int main()
{
    int n=4,m=5;
    alokuj(n,m);
    tabela(n,m);
    return 0;
}