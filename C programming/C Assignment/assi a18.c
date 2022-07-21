#include<stdio.h>

void CS()
{
	int a,b;
	printf("\nEnter A and B : ");
	scanf("%d %d",&a,&b);
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*");
	printf("\nSquare of A = %d",a*a);
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*");
	printf("\nSquare of B = %d",b*b);
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*");
	printf("\ncube of A = %d",a*a*a);
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*");
	printf("\ncube of B = %d",b*b*b);	
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*");
}

void main()
{
	CS();

}