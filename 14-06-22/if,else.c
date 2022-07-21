#include<stdio.h>

void main()
{
	int a1,b2;
	printf("ENTER THE VALUE OF A1 & B2 : ");
	scanf("%d%d",&a1,&b2);
	if(b2 > 0)
	{
		printf("\naddition is =%d",a1+b2);
		printf("\nsubtraction is =%d",a1-b2);
		printf("\nmultiplication is =%d",a1*b2);
		printf("\ndivision is =%.2f",a1/(float)b2);
	}
//	else
	{
		//printf("PLEASE ENTER VALUE GREATER THEN 0");
	}
}