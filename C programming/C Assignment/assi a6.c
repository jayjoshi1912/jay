#include<stdio.h>

void main()
{
	int m1[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the matrix1 [%d][%d] = ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
    printf("\nMatrix1 Elements : \n");	
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 printf("%d\t",m1[i][j]);	
		}
		printf("\n");
	}
}