#include<stdio.h>

void main()
{
	int m1[2][2],m2[2][2],m3[2][2],m4[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter matrix 1 elements [%d][%d] = ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-");
	printf("\nmatrix1 elements");
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter matrix 2 elements [%d][%d] = ",i,j);
			scanf("\n%d",&m2[i][j]);
		}
	}
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-");
	printf("\nmatrix2 elements");
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	
	
//	printf("\nmatrix 1 and matrix 2 multiplication");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			m3[2][2]=m1[2][2]*m2[2][2];
//		    printf("\n%d",m3[2][2]);
//		}
//	}
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
	printf("\nmatrix 1 and matrix 2 subtraction");
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m3[i][j] = m1[i][j] - m2[i][j];
		    printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
	printf("\nmatrix 1 and matrix 2 multiplication");
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m4[i][j]=m1[i][j]*m2[i][j];
		    printf("%d\t",m4[i][j]);
		}
		printf("\n");
	}
	
	
}