#include<stdio.h>

void main()
{
	int choice;
	int a,b;
	printf("\n-*-*--*-*-*-Choice Calculator-*-*-**-*-*-*");
	printf("\n\n1.Addition\n\n2.Subtraction\n\n3.Multiplication\n\n4.Division");
	printf("\n\nENTER A AND B");
	scanf("%d%d",&a,&b);
	printf("\n\nA=%d ,B=%d",a,b);
	printf("\nEnter Your Choice ?");
	scanf("%d",&choice);
	if (choice == 1)
	{
		printf("Addition Is =%d",(a+b));
	}
	else if (choice == 2)
	{
		printf("Subtraction Is =%d",(a-b));
	}
	else if (choice == 3)
	{
		printf("Multiplication Is =%d",(a*b));
	}
	else if (choice == 4)
	{
		printf("Division Is =%d",(a/(float)b));
	}
	else 
	{
		printf(" invalid choice");
	}
}