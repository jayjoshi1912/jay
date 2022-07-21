#include<stdio.h>

void main()
{
	int a,b,choice;
	printf("\nENTER A&B : ");
	scanf("%d%d",&a,&b);
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : printf("\nAddition is %d",a+b);
				break;
	    case 2 : printf("\nSubtraction is %d",a-b);
				break;
	    case 3 : printf("\nMultiplication is %d",a*b);
				break;
		case 4 :printf("\nDivision is %.2f",a/(float)b);
				break;
		default : printf("\nit  is invalid");
				break;					
	}
	printf("\nit is of switch");
}