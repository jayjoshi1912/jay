#include<iostream>
using namespace std;
//fun overriding : same function same perameter .
class A
{
	public:
		void show()
		{
			cout<<"\nShow Method from class A "<<endl;
			
		}
};

class B
{
	public:
		void show()
		{
			cout<<"\nShow Method from class B"<<endl;
		}
};
int main()
{
	B b;
	b.show();
	return 0;
}
