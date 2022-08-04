#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"show method class A ";
		}
	
};
class B :public A
{
	public:
		void show()
		{
			cout<<"Show Mwthod Class B ";
		}
};
	
int main()
{
//	B b;
//  b.show();
	B *b = new B;
	b->show();
	
	return 0;
}