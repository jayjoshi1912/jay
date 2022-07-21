#include<iostream>
using namespace std;

int main ()
{
	int a,b,choice;
	cout<<endl;
	cout<<"Enter A : ";
	cin>>a;
	cout<<endl;
	cout<<"Enter B : ";
	cin>>b;
	cout<<"\nA = "<<a<<"\tB = "<<b<<endl;       //endl->end of line.
	
	cout<<"\n\n1.Addition \n\n2.Subtraction \n\n3.Multiplication \n\n4.Division"<<endl<<endl;
	cout<<"Enter Your Choice : ";
	cin>>choice;
	cout<<endl;
	cout<<"===========arithmetic calulation==========="<<endl<<endl;
	switch(choice)
	{
	case 1 : cout<<"Addition Is = "<<a+b<<endl;
		   	 break;
	case 2 : cout<<"Subtraction Is = "<<a-b<<endl;
		     break;
	case 3 : cout<<"Multiplicatin Is = "<<a*b<<endl;
		     break;
	case 4 : cout<<"Division Is = "<<a/(float)b<<endl;	
           	 break;
	default :cout<<"invalid choice";
	}
	
	return 0;
}