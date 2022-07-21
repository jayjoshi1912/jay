#include<stdio.h>

void factorial()
{
	long long i,n,fact=1;
	printf("\nENTER FACTORIAL NUMBER IS ");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%ld",i);
		fact=fact*i;
	}
	printf("FACT OF LOOP = %ld",fact);
}

void main()
{
	factorial();
}