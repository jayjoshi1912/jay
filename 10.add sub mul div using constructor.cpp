#include<iostream>
using namespace std;

class CALCULATION
{
  public:
      int a,b;
	  CALCULATION()
	  {
	  	cout<<"Enter A = ";
	  	cin>>a;
	  	cout<<"Enter B = ";
	  	cin>>b;
	  	
	  	cout<<"================================="<<endl;
	  	cout<<"          Calculation"<<endl;
	  	cout<<"================================="<<endl<<endl;
	  	cout<<"Addition Is      : "<<a+b<<endl;
	  	cout<<"Subtraction Is   : "<<a-b<<endl;
	  	cout<<"Multipication Is : "<<a*b<<endl;
	  	cout<<"Division Is      : "<<a/(float)b<<endl;
	  	
	  	
	  }	
};
int main()
{
	CALCULATION c;
	return 0;
}

