#include<stdio.h>

void main()
{
	int a,b,c,greater;
	printf("\nENTER THREE NUMBER : ");
	scanf("%d %d %d",&a, &b, &c);

	
	if(a>=b)
	{
		if(a>=c)
		{
			printf("\nA IS GRETER");
		}
		else
		{
			printf("\nC IS GRETER");
		}
	}
	else
	{
		if(b>=c)
		{
			printf("\nB IS GRETER");
		}
		else
		{
			printf("\nC IS GRETER");
		}
	}
}