#include<stdio.h>

void main ()
{
   int a =10 , b=20,addition,subtraction,multiplication,squarea,squareb,cubea,cubeb;
   float div;
   printf ("\nA = %d  \nB = %d",a,b);
   
   addition = a+b;
   printf("\n\nAddition is       : %d",addition);
   
   subtraction= a-b;
   printf("\n\nsubtraction is    : %d",subtraction);
   
   multiplication =a*b;
   printf("\n\nmultiplication is : %d",multiplication);
   
   squarea=a*a;
   squareb=b*b;
   
   printf("\n\nsquare A is       : %d",squarea);
   printf("\n\nsquare B is       : %d",squareb);

   cubea=a*a*a;
   cubeb=b*b*b;
   
   printf("\n\n cube A is        : %d",cubea);
   printf("\n\ncube B is         : %d", cubeb);
 
 div =b/a;
 printf("\n\ndiv is            : %f",div);
   
}