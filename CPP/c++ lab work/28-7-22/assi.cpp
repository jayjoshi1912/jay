#include<iostream>
using namespace std;

class ASMD
{
	public:
	
		void  demo(int a,int b,int c,int d,int p)
		{
			cout<<endl;
			cout<<"Addition is : "<<a+b+c+d+p<<endl<<endl;
		}
		
		void demo(double j,double k,double l)
		{
			cout<<endl;
			cout<<"Subtraction Is : "<<j-k-l<<endl<<endl;
		}
		void demo(long double e ,long double f,long double g,long double h)
		{
			cout<<endl;
			cout<<"Multiplication is : "<<e*f*g*h<<endl<<endl;
		}
		
		void demo(float y, float z)
		{
			cout<<endl;		
			cout<<"Division Is : "<<y/(float)z<<endl<<endl;
		}
};
int main()
{
	ASMD a;
    a.demo(8,9,7,6,10);
	a.demo(15,5,5);
	a.demo(2,2,2,2);
	a.demo(50,22);
	return 0;
}