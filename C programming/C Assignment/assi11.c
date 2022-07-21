#include<stdio.h>

void main()
{
	int year;
	printf("\nENTER ANY YEAR : ");
	scanf("%d",&year);
	
//	if(year % 400 ==0)
	//{
	//	printf("\nTHIS IS LEAP YEAR.",year);
	//}
	 if(year % 4 ==0)
	{
		printf("\nTHIS IS LEAP YEAR.",year);
	}
	else
	{
		printf("\nTHIS IS NOT LEAP YEAR.",year);
	}
}