//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a,b,choice;
//	cout<<endl;
//	cout<<"\nA = ";
//	cin>>a;
//	cout<<endl;
//	cout<<"\nB = ";
//	cin>>b;
//	cout<<endl;
//	cout<<"----------Calculation+++++++++++++"<<endl<<endl;
//	cout<<"Addition Is "<<a+b<<endl;
//	cout<<"Subtraction Is "<<a-b<<endl;
//	cout<<"Multiplication Is "<<a*b<<endl;
//	cout<<"Division Is "<<a/(float)b<<endl;
//	return 0;
//}
#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;
	cout<<endl;
	cout<<"\nA = ";
	cin>>a;
	cout<<endl;
	cout<<"\nB = ";
	cin>>b;
	cout<<endl;
	cout<<"\nA = "<<a<<"\tB = "<<b<<endl;
	cout<<"\n\n1.Additon \n\n2.Subtraction \n\n3.Multiplication \n\n4.Division"<<endl<<endl;
	cout<<"Enter Your Choice ";
	cin>>choice;
	cout<<"-===-===-===-===-Calculation-===-===-===-===-"<<endl<<endl;
	switch(choice)
	{
	case 1 : cout<<"Addition Is "<<a+b<<endl;
			break;
	case 2 :cout<<"Subtraction Is "<<a-b<<endl;
			break;
	case 3 : cout<<"Multiplication Is "<<a*b<<endl;
			break;
	case 4 : cout<<"Division Is "<<a/(float)b<<endl;		
			break;
	default :cout<<"INVALID CHOICE CHOICE CORRECT ONE ";
	}
	return 0;
}