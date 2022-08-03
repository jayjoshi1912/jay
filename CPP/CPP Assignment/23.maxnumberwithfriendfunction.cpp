#include<iostream>
using namespace std;

class Number
{
	int num1,num2;
	friend int Max(Number);
	public:
		Number()
		{
			cout<<"Enter No : ";
			cin>>num1;
			cout<<endl;
			cout<<"Enter No : ";
			cin>>num2;
			cout<<endl;
		}
	
};

int Max(Number n1)
{
	if(n1.num1 > n1.num2)
	{
		cout<<"^^^^^^^^^^^^^^^^^^^"<<endl;
		  cout<<"Number 1 Is Max "<<endl<<endl;
		cout<<"^^^^^^^^^^^^^^^^^^^"<<endl;
	}
	else
	{
		cout<<"^^^^^^^^^^^^^^^^^"<<endl;
		cout<<"Number 2 Is Max"<<endl<<endl;
		cout<<"^^^^^^^^^^^^^^^^^"<<endl;
	}
	return 0;
}
int main()
{
	Number n;
	Max(n);
	return 0;
}