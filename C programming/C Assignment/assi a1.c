#include<stdio.h>

void main()

{
	int a,i[10],sum=0;
	float avg;
	for(a=1;a<=10;a++)
	{
		printf("\nElements %d = ",a);
		scanf("%d",&i[a]);
	}
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
	printf("\n Elements are : ");
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
	for(a=1;a<=10;a++)
	{
		printf("\n\nElements [%d] = %d",a,i[a]);
		 sum+=i[a];
		avg = sum/(float)10;
	}
	printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
	printf("\n\n     Summation is = %d  ",sum);
	printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
	printf("\n\n     Average is   = %.2f ",avg);
    printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
}