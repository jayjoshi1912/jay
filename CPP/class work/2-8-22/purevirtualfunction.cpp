#include<iostream>
using namespace std;

class A
{
	public:
		void show1() // not a pure virtual function.
		{
			cout<<"\nNon-virtual show method from A";
		}
		virtual void show2(); // pure vitrual function or abstract function.
		
};

class B : public A
{
	public:
		void show2()
		{
			cout<<"\nimpliemented show method from class A";
		}
		virtual void show3();
};

class C:public B
{
	public:
		void show3()
		{
			cout<<"\nImpliemented show method from class B";
		}
		
		
};
int main()
{
	C c;
	c.show1();
	c.show2();
	c.show3();
	return 0;
}