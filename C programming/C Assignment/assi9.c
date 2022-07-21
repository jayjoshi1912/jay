#include<stdio.h>

void main()
{
	int a=10,b=20;
	printf("\n+--+--+--+--+--+--+--+--+--+--+");
	printf("\n    Before Swap A=%d,B=%d",a,b);
	printf("\n+--+--+--+--+--+--+--+--+--+--+");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\n+--+--+--+--+--+--+--+--+--+--+");
	printf("\n     After Swap A=%d,B=%d",a,b);
	printf("\n+--+--+--+--+--+--+--+--+--+--+\n\n");
}