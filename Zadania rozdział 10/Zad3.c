#include <stdio.h>
#include <conio.h>
max(int [],int);
void main()
{
	int a[]={13,45,674,423,765,353};
	int n=5,m;
	m=max(a,n);
	printf("\nNajwyższa liczba to: %d",m);
	getch();
}
max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}