#include<stdio.h>

void main()
{
	int n1,n2;
	printf("\nENTER A : ");
	scanf("%d",&n1);
	printf("\nENTER B : ");
	scanf("%d",&n2);
	printf("\nA=%d ,B=%d",n1,n2);
	if(n1>n2)
	{
		printf("\nA IS GREATER");
	}
	else
	{
		printf("\nB IS GREATER ");
	}
}