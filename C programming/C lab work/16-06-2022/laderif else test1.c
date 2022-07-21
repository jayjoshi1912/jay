#include<stdio.h>

void main()
{
	char name[10];
	int rollno,s1,s2,s3,total;
	float per;
	printf("\n-*-*-*-ACCEPT STUDENT DETAIL-*-*-*-*-*\n");
	 printf("\nENTER NAME    : ");
    gets(name);
    printf("\nENTER ROLL NO : ");
    scanf("%d",&rollno);
    printf("\nENTER GUJARATI : ");
    scanf("%d",&s1);
    printf("\nENTER HINDI : ");
    scanf("%d",&s2);
    printf("\nENTER ENGLISH : ");
    scanf("%d",&s3);
    total=s1+s2+s3;
    per=total/3;
    printf("\nENTER TOTAL MARKS = %d",total);
    printf("\n\nENTER PERCENTAGE = %f",per);
    if(per>75)
    {
    	printf("\n\nClass : Distinction");
	}
	else if (per>65)
	{
		printf("\n\nClass : First Class");
	}
	else if (per>50)
	{
		printf("\n\nClass : second Class");
	} 
	else if (per>40)
	{
		printf("\n\nClass : Pass Class");
	}
	else 
	{
		printf("\n\nFail");
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	