#include<iostream>
using namespace std;
class constructor
{
	double a,b;
   public:
   	
   	constructor()
   	{
   		cout<<"Default constructor called ";
	}
	
	constructor(double a,double b)
	{
		cout<<"parameterized constructor called";
		this->a = a;
		this->b = b;
		cout<<"\nA = "<<this->a<<" B = "<<this->b;
	}
	
	constructor(const constructor &c)
	{
		cout<<"copy constuctor called"<<endl;
		this->a = c.a;
		this->b = c.b;
		
		
	}
   	
};

int main()
{
	constructor c;
	constructor c1(23,43);
	return 0;
}