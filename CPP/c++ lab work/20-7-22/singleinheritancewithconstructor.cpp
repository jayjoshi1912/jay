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
		}
}; 
class B : public A
{
  public:
     B()
     {
     cout<<"A = "<<a;	
     }
};

int main()
{
	B b;
	
	return 0;
}