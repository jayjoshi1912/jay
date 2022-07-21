#include<stdio.h>

void main()
{
	int a=78, b=87, c=90 ,max;
	
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\nMax is %d",max);
	
}