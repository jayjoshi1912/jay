#include<stdio.h>

void main()
{
	int a=6 , b=9, addition, subtration , multiplication ,squarea , squareb, cubea , cubeb;
	
	printf("\n A=%d  \n B=%d",a,b);
	
	addition =a+b;
	printf("\n\nadd is %d",addition);
	
	subtration =b-a;
	printf("\n\nsub is %d",subtration);
	 
	 multiplication = a*b;
	 printf("\n \nmul is %d",multiplication);
    
     squarea =a*a;
     squareb =b*b;
     
	 printf("\n\nsquarea  is  %d",squarea);
     printf("\n\nsquareb is   %d",squareb);
     
     cubea =a*a*a;
     cubeb =b*b*b;
     
     printf("\n\ncubea is %d",cubea);
     printf("\n\ncubeb is %d",cubeb);
}