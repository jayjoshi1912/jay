#include<stdio.h>

void main()
{
	int m1[3][3],m2[3][3],m3[3][3];
	int a,b;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("Enter Matrix1 Element [%d][%d] : ",a,b);
			scanf("%d",&m1[a][b]);
		}
		
	}
	
	printf("\n");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("Enter Matrix2 Element [%d][%d] : ",a,b);
			scanf("%d",&m2[a][b]);
		}
	}
	
	printf("\n\n Matrix1 Elements :");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("%d",m1[a][b]);
		}
	}
	
	printf("\n\n Matrix2 Elements : ");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("%d",m2[a][b]);
		}
	}
	
	printf("\n\nAddition  of Matrix1 and Matrix2 Elements\n\n ");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			m3[a][b]= m1[a][b] + m2[a][b];
	        printf("%d ",m3[a][b]);
		}
		printf("\n ");
	}
	
	
}