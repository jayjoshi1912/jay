#include<stdio.h>

void main()
{
	float a,b,area ;
	printf("\nENTER A&B \t\t:" );
	scanf("%f%f",&a,&b);
//	printf("enterB  \t:");
//  scanf("%f",&b);
	printf("\nA\t\t=%f  \nB\t\t=%f",a,b);
	area=(a*b)/2;
	printf("\nENTER AREA OF TRIANGLE IS :%.2f",area);
}