#include<stdio.h>

void main()
{
	int result1[5],result2[5],result3[5];
	int i;
	printf("\nEnter Array1 Elements : ");
	for(i=0;i<5;i++)
	{
		printf("\nEnter Element [%d]:",i);
		scanf("%d",&result1[i]);
	}
	printf("\nArray1 Element are : ");
	for(i=0;i<5;i++)
	{
		printf("\n\nElement[%d] = %d",i,result1[i]);
	}
	printf("\n\nEnter Array2 Elements");
	for(i=0;i<5;i++)
	{
		printf("\nEnter Element [%d]:",i);
		scanf("%d",&result2[i]);
	}
	printf("\nArray2 Elements are :");
	for(i=0;i<5;i++)
	{
		printf("\n\nElement[%d] = %d",i,result2[i]);
    }
	
	
	printf("\n\nAddition of 2 Result are : "); 
	for(i=0;i<5;i++)
	{
		result3[i]=result1[i]+result2[i];
		printf("\n\nElement[%d] = %d",i,result3[i]);
	}
}