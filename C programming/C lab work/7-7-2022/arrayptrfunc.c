#include<stdio.h>

void display(int*p)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",(*p+i));
	}
}
void main()
{
	int ar[10]={5,12,15,20,25};
	display(ar);
}