#include<stdio.h>

void main()
{
	int num;
	printf("-*-*-*-*-**-*-*-*-*-*-*");
	printf("\n\nENTER THE NUMBER : ");
	scanf("%d",&num);
	printf("\n-*-*-*-*-**-*-*-*-*-*-*-");
	if(num<=0)
	{
		if(num==0)
		{
			printf("\nYOU ENTER 0");
		}
		else
		{
			printf("\nYOU ENTER NAGTIVE NUMBER");	
		}
	}
	else
	{
	printf("\nYOU ENTER POSITIVE NUMBER");
	}
}