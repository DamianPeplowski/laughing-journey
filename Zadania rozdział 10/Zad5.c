#include<stdio.h>
void main(){
    int arr[100],a,i,max,min,r;
    printf("podaj rozmiar tablicy:");
    scanf("%d",&a);
    printf("podaj liczby ");
    for(i=0;i<a;i++)
    {
    scanf("%d",&arr[i]);
    }
    min= max=arr[0];
    for(i=0;i<a;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    
    r=max-min;
    printf("roznica miedzy nimi to %d",r);
}