#include<stdio.h>

void main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf(" %d",a*a);
		}
		printf("\n");
	}
}