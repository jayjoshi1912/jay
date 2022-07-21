#include<iostream>
using namespace std;

class A
{
  public:
    int a;
	A()
	{
		cout<<"A = ";
		cin>>a;
		cout<<"A = "<<a<<endl;
	}		
};
class B :public A
{
	public:
		int b;
		B()
		{
			cout<<"B = ";
			cin>>b;
			cout<<"B = "<<b<<endl;
		}
};
class C :public B
{
    public:
	int c;
	C ()
	{
	  cout<<"C = ";
	  cin>>c;
	  cout<<"C = "<<c;
	}	
};


int main()
{
	C c;
	return 0;
	
}