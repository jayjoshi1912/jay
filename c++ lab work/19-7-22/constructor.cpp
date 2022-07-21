#include<iostream>
using namespace std;
class constructordemo
{
	public:
		double a,b;
		
		constructordemo()
		{
			cout<<"Default Constructor called";
			a=50;
			b=51;
			cout<<endl;
		}
		constructordemo(double a,double b)
		{
			cout<<endl;
			cout<<"Perameter Constructor Called";
			this->a = a;
			this->b = b;
			cout<<endl;
		}
		constructordemo(const constructordemo &c)
		{
			cout<<endl;
			cout<<"copy constructor called";
			this->a = c.a;
			this->b = c.b;
			cout<<endl;
		}
		
		void display()
		{
			cout<<"\n A = "<<a<<"\tB = "<<b;
		}
 }; 

int main()
{
	constructordemo cd;
	cd.display();
	constructordemo cd1(80,87);
	cd1.display();
	constructordemo cd2(cd);
	cd2.display();
	
	return 0;
}
