#include<stdio.h>

void main()
{
	int a=5,b;
	b= ++a;
	b= a++;
	a= --b;
	b= a--;
	printf("\nA=%d \nB=%d",a,b);
}