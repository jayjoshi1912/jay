#include<iostream>
using namespace std;

class A
{
	public:
		void msg()
		{
			cout<<"\nHI Message from class A\n";
		}
};
class B: virtual public A
{
	public:
		
};
class C :virtual public A
{
	public:
		
};
class D : public B,public C
{
    public:	
};
int main()
{
	D d;
	d.msg();
	return 0;
}