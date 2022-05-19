#include <stdio.h>

 int min(int a[], int n)
 {
    
     int min,max,i;
     min=a[0];
     for(i=1; i<n; i++)
     {
         if(min>a[i])
         min=a[i];
     }
    printf("\n Min liczba to: %d",min); 
 }
 
 int max(int a[], int n)
 {
    
     int min,max,i;
     max=a[0];
     for(i=1; i<n; i++)
     {
         if(max<a[i])
		    max=a[i];
     }
    printf("\n Max liczba to: %d",max); 
 }
 

  int maxindex(int *a, int n)
    {
        if(n <= 0) return -1;
        int i, max_i = 0;
        int max = a[0];
        for(i = 1; i < n; ++i){
            if(a[i] > max){
                max = a[i];
                max_i = i;
            }
        }
        printf("\n Index maxymalnej liczby to: %d", max_i);
    }
 
 int minindex(int *a, int n)
    {
        if(n <= 0) return -1;
        int i, min_i = 0;
        int min = a[0];
        for(i = 1; i < n; ++i){
            if(a[i] < min){
                min = a[i];
                min_i = i;
            }
        }
        printf("\n Index minimalnej liczby to: %d", min_i);
    }

int main()
{
   int a[1000],i,n;
    printf("Rozmiar tablicy: ");
    scanf("%d", &n);
    printf("Elementy tablicy: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max(a,n);
    min(a,n);
    maxindex(a,n);
    minindex(a,n);
    
    return 0;
}
