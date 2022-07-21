#include<stdio.h>

void main()
{
	int choice,r,l,w,b,h;
	float area;
	printf("\nEnter 1 for area of circle ");
	printf("\nEnter 2 for area of rectangle");
	printf("\nEnter 3 for area of triangle");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :printf("\nEnter radious of the circle : ");
		        scanf("%d",&r);
		        area=3.14*r*r;
		        break;
		case 2 : printf("\nEnter length and width of the rectangle");
		         scanf("%d%d",&l,&w);
		         area=l*w;
		         break;
		case 3 : printf("\nEnter base and hight of the triangle");
		         scanf("%d%d",&b,&h);
				 area=.5*b*h;
				 break;
    }
	printf("\nThe area is : %.2f",area);	
}