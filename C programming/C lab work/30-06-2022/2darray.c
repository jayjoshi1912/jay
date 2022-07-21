#include<stdio.h>

void main()
{
	int TowD[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Elements [%d][%d] :",i,j);
			scanf("%d",&TowD[i][j]);
		}
	}
	printf("\nDisplay Elements  \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",TowD[i][j]);
		}
		printf("\n");
	}
}