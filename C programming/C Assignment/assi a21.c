#include<stdio.h>
void maximum();
void main()
{
	maximum();
}

void maximum()
{
	int a[5],i,max;
	for(i=0;i<5;i++)
	{
		printf("\nEnter Elements ");
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	
	for(i=0;i<5;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	
	printf("\nMaximun Number Is %d",max);
	
	
}