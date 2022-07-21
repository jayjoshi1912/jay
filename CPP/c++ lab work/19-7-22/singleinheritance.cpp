#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void getA()
		{
			cout<<"Enter A :";
			cin>>a;
		} 
		
};
class B :public A
{
	public:
		int b;
		void shows()
		{
			cout<<"A = "<<a;
		}
};
int main()
{
	B b;
	b.getA();
	b.shows();
	return 0;
}
