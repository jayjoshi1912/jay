#include<stdio.h>

void main()
{
	int i,n,table;
	printf("Enter Table No : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		table= n * i;
		printf("\n%d x %d =%d",n,i,table);
	}
}