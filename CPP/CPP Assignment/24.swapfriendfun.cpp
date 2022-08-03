#include<iostream>
using namespace std;

class FF
{
	int a,b;
	friend int swap(FF);
	public:
		FF()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<endl;
			cout<<"Enter B : ";
			cin>>b;
			cout<<endl;
		}
		
};

int swap(FF f1)
{
	int c;
	cout<<endl;
	cout<<"Before Swap A = "<<f1.a<<"\tB = "<<f1.b<<endl<<endl<<endl;
	c=f1.a;
	f1.a=f1.b;
	f1.b=c;
	cout<<"After Swap  A ="<<f1.a<<"        B = "<<f1.b<<endl;
	return 0;
}
int main()
{
	FF f;
	swap(f);
	return 0;
}