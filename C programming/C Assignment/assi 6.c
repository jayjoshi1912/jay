#include<stdio.h>

void main()
{
	float P,R,T,SI;
	printf("\nENTER PRINCIPAL AMOUNT  : ");
	scanf("%f",&P);
	printf("\n ENTER RATE             : ");
	scanf("%f",&R);
	printf("\n ENTER TIME             : ");
	scanf("%f",&T);
	
	SI=(P*R*T)/100;
	
	printf("\nSIMPLE INTEREST IS      :%f ",SI);
}