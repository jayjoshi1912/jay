#include<stdio.h>

void main()
{
	float celsius, fahrenheit;
	printf("\nENTER TEMPERATURE IN CELSIUS :  ");
	scanf("%f",&celsius);
	fahrenheit = (1.8*celsius)+32;
	printf("\nENTER TEMPERATURE IN FAHRENHEIT : %f",fahrenheit);
}