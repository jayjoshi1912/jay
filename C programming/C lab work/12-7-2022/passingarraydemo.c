#include<stdio.h>
void displayarray(int a)
{
	printf("\n%d",a);
}
void main()
{
	int a[5] = {51,52,53,54,55};
	int i;
	for(i=0;i<5;i++) 
	{
		displayarray(*(a+i));
		//displayarray(a[i]);
	}
	
}