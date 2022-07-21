#include<stdio.h>

void swap(int a ,int b)
{
	int temp;
	temp=a;
    a=b;
    b=temp;
    printf("\nAFTER SWAP A=%d B=%d ",a,b);
}
void main()
{
	int a=100,b=50;
	printf("\nBEFORE SWAP A=%d B=%d",a,b);
	swap(a,b);
}