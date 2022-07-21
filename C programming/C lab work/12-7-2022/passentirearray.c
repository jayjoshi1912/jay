#include<stdio.h>
void displayarray(int *a);
void main()
{
	int a[5] = {10,20,30,40,50};
	int i;
	displayarray(a);
}

void displayarray(int *a)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(a+i));
	}
}