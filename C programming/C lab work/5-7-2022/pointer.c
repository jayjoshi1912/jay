#include<stdio.h>

void main()
{
	int a=20,*ptr;
	printf("\nwithout pointer address A=%u",&a);
	ptr=&a;
	printf("\nwith pointer address A=%u",ptr);
	printf("\nwithout pointer value A=%u",a);
	printf("\nwith pointer value A=%u",*ptr);
	
}