#include<iostream>
using namespace std;
class constructor
{
	double a,b;
   public:
   	
   	constructor()
   	{
   		cout<<"Default constructor called "<<endl;
   		a=20;
   		b=98;
   		
	}
	
	constructor(double a,double b)
	{
		cout<<endl;
		cout<<"parameterized constructor called"<<endl;
		this->a = a;
		this->b = b;
		
	}
	
	constructor(const constructor &c)
	{
		cout<<endl;
		cout<<"copy constuctor called"<<endl;
		this->a = c.a;
		this->b = c.b;
	}
	
	void display()
	{
		cout<<"\nA = "<<a<<" B = "<<b;
	}
	
   	
};

int main()
{
	constructor c;
	c.display();
	constructor c1(23,43);
	c1.display();
	constructor c2(c1);
	c2.display();
	return 0;
}