#include<stdio.h>

void main()
{
	int a,b,choice;
	
	printf("\nENTER A : ");
	scanf("%d",&a);
	printf("\nENTER B : ");
	scanf("%d",&b);
	printf("\n--------------------------\n");
	printf("CHOICE CALCULATER");
	printf("\n--------------------------\n");
	printf("\n1.Addition \n\n2.Subtraction \n\n3.Multiplication \n\n4.Division");
	printf("\n\nENTER Your Choice : ");
	scanf("%d",&choice);
	if (choice == 1)
	{
		printf("\nAddition is =%d ",a+b);
	}
	else if (choice == 2)
	{
		printf("\nSubtraction is =%d",a-b);
	}
	else if (choice == 3)
	{
		printf("\nMultiplication is =%d",a*b);
	}
	else if (choice == 4)
	{
		printf("\nDivision is =%.2f",a/(float)b);
	}
	else
	{
		printf("\nInvalid Choice ");
	}
}