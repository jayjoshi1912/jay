#include<stdio.h>

void fibonacci()
{
	int n1=0,n2=1,n,a,n3;
	printf("\nENTER ANY NUMBER ");
	scanf("%d",&n);
	printf("%d %d",n1,n2);
	for(a=2;a<=n;a++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf(" %d",n3);
	}
	
}

void main()
{
	fibonacci();
}