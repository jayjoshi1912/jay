#include<stdio.h>

void main()
{
	int s1,s2,s3,s4,s5,sum;
	float avg;
	printf("\nENTER THE MARKS OF FIVE SUBJECTS :  ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum = s1+s2+s3+s4+s5;
	avg = sum/5;
	printf("\nTOTAL MARKS IN FIVE SUBJECTS : ");
	printf("%d",sum);
	printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
	printf("\n\nPERCENTS OF 5 SUBJECTS : ");
	printf("%f",avg);
}
	