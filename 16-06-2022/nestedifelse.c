#include<stdio.h>

void main()
{
	int n1,n2,n3;
	printf("\nENTER A : ");
	scanf("%d",&n1);
	printf("\nENTER B : ");
	scanf("%d",&n2);
	printf("\nENTER C : ");
	scanf("%d",&n3);
	printf("\nA=%d, B=%d, C=%d",n1,n2,n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\nA IS GREATER");
		}
		else
		{
			printf("\nC IS GREATER");
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("\nB IS GREATER");
		}
		else
		{
			printf("\nC IS GREATER");
		}
}	}