#include<stdio.h>

void main()
{
	int i,fact=1;
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
		fact=fact*i;
	}
	printf("\nfact of loop =%d",fact);
}