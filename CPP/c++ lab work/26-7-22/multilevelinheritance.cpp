#include<iostream>
using namespace std;

class A
{
	public:
		int a =20;
		
};

class B :public A
{
  public:
      int b=30;	
};

class C :public B
{
	public:
		int c=40;
};
int main()
{
	C c;
	cout<<"A = "<<c.a;
	cout<<"\nB = "<<c.b;
	cout<<"\nC = "<<c.c;
	
	return 0;
}