#include<stdio.h>

void swap(int *a , int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a=10 ,b=100;
	printf("\nBEFORE SWAP A=%d B=%d",a,b);
	swap(&a,&b);
	printf("\nAFTER SWAP A=%d B=%d",a,b);
}