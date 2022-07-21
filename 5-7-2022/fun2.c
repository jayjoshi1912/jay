#include<stdio.h>

void fun1(int a, int b)
{
	printf("\nIn Function A=%d b=%d",a,b);
}

int add(int a, int b)
{
	printf("\nIn Add Function a=%d b=%d",a,b);
	return a+b;
}

void main()
{
	int a=10,b=2;
	fun1(a,b);
	printf("\nIn Main Function  Value Returned = %d",add(a,b));	
}