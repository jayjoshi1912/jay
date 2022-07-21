#include<stdio.h>

void main()
{
	int n, a=0, b=1, i, c;
	printf("Enter the term...");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=5;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	
}