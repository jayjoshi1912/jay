#include<stdio.h>

void asmd()
{
	int a,b;
	printf("\nEnter A and B : ");
	scanf("%d %d",&a,&b);
	printf("\nAddition is = %d ",a+b);

	printf("\nSubtraction is = %d",a-b);
	
	printf("\nMultiplication is = %d",a*b);
	
	printf("\nDivision is = %.2f",a/(float)b);	
}
void main()
{
   asmd();	
}