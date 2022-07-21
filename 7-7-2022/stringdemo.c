#include<stdio.h>

void main()
{
	char name[10];
	int len;
	pritf("\nEnter Name : ");
	gets (name);
	printf("\nName Is %s",name);
	len=sizeof(name);
	pritf("\nName Of Size Is %d",len);

}