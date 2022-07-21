#include<stdio.h>

void fun1()
{
	printf("\nThis Is Fun1");
}
void fun2()
{
	fun1();
	printf("\nThis Is Fun2");
}
void main()
{
	fun2();
	fun1();
}