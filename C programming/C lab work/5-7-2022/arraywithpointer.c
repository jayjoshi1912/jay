#include<stdio.h>

void main()
{
	int a[5]={5,10,15,20,25},i,*ptr;
	ptr=a;
	printf("\n\n/=/=/=/=value of array without pointer/=/=/=/=/=\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n\n/=/=/=/=Address of array without pointer/=/=/=/=/=\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",(a+i));
	}
	printf("\n\n/=/=/=/=value of array with pointer/=/=/=/=/=\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	printf("\n\n/=/=/=/=Address of array with pointer/=/=/=/=/=\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",(ptr+i));
	}
	

	
}