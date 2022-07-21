#include<stdio.h>

void main()
{
	int num=0;
	while(num<=100)
	{
		printf("\n%d",num);
		num++;
		if(num>3)
		{
			break;
		}
    }
	printf("\nout of loop");	
}