#include<stdio.h>

void  main()
{

char firststr[10];
char secondstr[10];

int i,j;
printf("\nEnter The First String ");
scanf("%s",&firststr);
printf("\nEnter The Second String ");
scanf("%s",&secondstr);

for(i=0;firststr[i] != '\0';i++);

for(j=0;secondstr[j] !='\0';j++)
{
	firststr[i]=secondstr[j];
	i++;
}
firststr[i]='\0';
printf("After Concatenation , the string would look like : %s",firststr);
}
