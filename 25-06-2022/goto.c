#include<stdio.h>

void main()
{
	int i,sum=0;
	for(i=1;i<=5000;i++)
	{
		printf("\n%d",i);
		sum +=i;
		if(i==49)
		{
			goto add;
		}
	}
    add:
	printf("\nsum =%d",sum);
}