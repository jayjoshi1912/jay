#include<stdio.h>

void main()
{
	char ch;
	printf("\nENTER A Character ?\n");
	scanf("%c",&ch);
	
	switch(ch)
	{
	
		case 'a': printf("\nit is vowel");
				 break;
	    case 'e': printf("it is vowel");
	 			break;
	 	case 'i': printf("it is vowel");
	 	        break;
	    case 'o': printf("it is vowel"); 
	             break;
	    case 'u': printf("it is vowel");
	    	     break;
	    default : printf("\nit is a consonant");
	    	     break;
	 
   }
   printf("\nit is out of switch");
}