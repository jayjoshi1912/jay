#include<iostream>
using namespace std;

class base 
{
	public:
	virtual void show()
		{
			cout<<"show  from base class";
		}
};

class derived : public base
{
   public:
       void show()
	   {
	       cout<<"show from derived class ";   	
	   }	
};
int main()
{
	base *bac = new derived;
	bac->show();

//derived d;
//d.show();

	return 0;
}