#include<iostream>
using namespace std;

class ASMD
{
	public:
		
		void demo(int a, int b, int c, int d, int e)
		{
			cout<<endl;
			cout<<"Addition Is     : "<<a+b+c+d+e<<endl<<endl;
		}
		
		void demo(double f ,double g ,double h)
		{
		   cout<<endl;
		   cout<<"Subtraction Is    : "<<f-g-h<<endl<<endl;	
		}
		
		void demo(long double i,long double j,long double k,long double l)
		{
			cout<<endl;
			cout<<"multiplication Is : "<<i*j*k*l<<endl<<endl;
		}
		
		void demo(float m,float n)
		{
			cout<<endl;
			cout<<"Division Is      : "<<m/(float)n<<endl<<endl;
		}
};
int main()
{
	ASMD a;
	a.demo(10,20,30,5,5);
	a.demo(30,20,3);
	a.demo(2,2,2,2);
	a.demo(50,33);
	
	return 0;
}