#include<stdio.h>

void main()
{
	int i,a,t;
	for(i=1;i<=90;i++)
	{
		printf("\nmultiplication %d is",i);
		for (a=1;a<=10;a++)
		{
			t=i*a;
			printf("\n%d x%d = %d",i,a,t);
		}
		printf("\n");
	}
}