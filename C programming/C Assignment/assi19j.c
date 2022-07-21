#include<stdio.h>

void main()
{
	int n,last,sum;
	printf("Enert the number : ");
	scanf("%d",&n);
	last=n%10;
	while(n>9)
	{
		n=n/10;
	}
	sum=n+last;
	printf("sum of first digit and last digit =%d",sum);
}