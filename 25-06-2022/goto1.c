#include<stdio.h>

void main()
{
	int a;
	again :
	printf("\nEnter A : ");
	scanf("%d",&a);
	if(a==0)
	{
		goto exit;
	}
	printf("A=%d",a);
	goto again;
	
	exit:
		printf("\nsorry you have enter 0 ");
}