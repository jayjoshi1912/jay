#include<stdio.h>

void main()
{
	int a,b,add,sub,mul;
	float div;
	printf("enter the a:",a);
	scanf("%d",&a);
	printf("enter the b:",b);
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("\naddtion is  :%d",add);
	printf("\nsubtraction is :%d",sub);
	printf("\nmultification is  :%d",mul);
	printf("\ndiv is  :%.2f",div);
}