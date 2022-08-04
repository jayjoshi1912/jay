#include<iostream>
using namespace std;

class CONSTRUCTOR
{
	public:
		double a,b;
		CONSTRUCTOR()
		{
			cout<<"Default Constructor called."<<endl;
			a=10;
			b=20;
		}
		CONSTRUCTOR(double J,double K)
		{
			cout<<"Perameterized Constructor called.";
			this->a=J;
			this->b=K;
		
			cout<<"J = "<<J<<"\tK = "<<K<<endl;
			
		}
		void display()
		{
		  cout<<"A = "<<a<<"\tB = "<<b<<endl;
		}
};
int main()
{
	CONSTRUCTOR c;
	c.display();
	CONSTRUCTOR c1(23,34);
	c1.display();
	return 0;
}