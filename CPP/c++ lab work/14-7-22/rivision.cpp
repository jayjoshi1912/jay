#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;
	cout<<endl;
	cout<<"Enter A : ";
	cin>> a;
	cout<<endl;
	cout<<"Enter B : ";
	cin>> b;
	cout<<endl;
	cout<<"\nA = "<<a<<"\tB = "<<b<<endl;
	cout<<"\n\n1.Addition \n\n2.Subtraction \n\n3.Multiplication \n\n4.Division"<<endl<<endl;
	cout<<"Enter Your Choice : ";
	cin>>choice;
    cout<<endl;
    switch(choice)
    {
    	case 1 : cout<<"Addition Is : "<<a+b<<endl;
    			break;
    	case 2 : cout<<"Subtraction Is : "<<a-b<<endl;
    			break;
    	case 3 : cout<<"Multiplication Is : "<<a*b<<endl;
    			break;
    	case 4 : cout<<"Division Is : "<<a/(float)b<<endl;
    			break;
    	default : "Invalid Choice ";
	}
	return 0;
}