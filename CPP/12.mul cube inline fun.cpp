#include<iostream>
using namespace std;

class base
{
  public:
  	int a,b;
  inline void Accept()
  {
  	cout<<"Enter A : ";
  	cin>>a;
  	cout<<"Enter B : ";
  	cin>>b;
  }	
  inline void mul()
  {
  	cout<<"Multiplication : "<<a*b<<endl;
  	
  }
  inline void cube()
  {
  	cout<<"A Cube         : "<<a*a*a<<endl;
  	cout<<"B Cube         : "<<b*b*b<<endl;
  }
}; 

int main()
{
	base b;
	b.Accept();
	b.mul();
	b.cube();
	return 0;
}
