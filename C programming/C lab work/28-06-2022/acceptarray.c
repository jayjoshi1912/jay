#include<stdio.h>

void main()
{
	int gamepoint[5];
	int a;
	// accept array
	for(a=0;a<5;a++)
	{
		printf("\nEnter Element [%d] : ",a);
		scanf("%d",&gamepoint[a]);
	}
	
	//display array
	printf("\nArray Element Are =\n");
	for(a=0;a<5;a++)
	{
		printf("\n\nElememt[%d] = %d",a,gamepoint[a]);
	} 
	
}