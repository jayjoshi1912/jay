#include<stdio.h>

void main()
{
	int n1=0,n2=1,n3,n,a;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);
	printf("%d %d",n1,n2);
	for(a=2;a<=n;a++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("  %d",n3);
	}
	
}