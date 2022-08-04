#include<iostream>
using namespace std;

class DEMO
{
   public:
      int mul()
	  {
	  	return 5*5;
	  }	
	  int mul(int a)
	  {
	  	return a*a;
	  }
};
int main()
{
	DEMO d;
	cout<<d.mul()<<endl;
	cout<<d.mul(5);
	return 0;
}
