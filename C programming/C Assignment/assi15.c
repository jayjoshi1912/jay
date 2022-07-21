#include<stdio.h>

void main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float per;
	
	printf("\nENTER GUJARATRI MARK : ");
	scanf("%d",&sub1);
	printf("\nENTER HINDI MARK     : ");
	scanf("%d",&sub2);
	printf("\nENTER ENGLISH MARK   : ");
	scanf("%d",&sub3);
	printf("\nENTER SCIENCE MARK   : ");
	scanf("%d",&sub4);
	printf("\nENTER MATHS MARK     : ");
	scanf("%d",&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	printf("\n\nTOTAL=%d ",total);
	per=total/5;
	printf("\n\nPERCENTAGE=%.2f",per);
	
	if(per>75)
	{
		printf("\n\nclass : distinction");
	}
	else if(per>60)
	{
		printf("\n\nclass : first class");
	}
	else if(per>50)
	{
		printf("\n\nclass : second class");
	}
	else if(per>40)
	{
		printf("\n\nclass : pass class");
	}
	else
	{
		printf("\n\nfail");
	}
}