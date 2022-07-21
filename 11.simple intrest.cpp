#include<iostream>
using namespace std;

class SIMPLEINTREST
{
	public:
		int pa;
		float rate,year;
		SIMPLEINTREST()
		{
		  rate =2.5;	
		}
		void simpleintrest()
		{
		  cout<<endl;
		  cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
		  cout<<"         SIMPLE INTEREST"<<endl<<endl;
		  cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl<<endl;
		  cout<<"Enter Principal Amount   : ";
		  cin>>pa;
		  cout<<endl<<endl;
		  cout<<"Enter Year       : ";
		  cin>>year;
		  cout<<endl<<endl;
		  cout<<"Rate             : "<<rate<<endl;
		  cout<<endl<<endl;
		  cout<<"simple Intrest   : "<<(pa*year*rate)/(float)100;
		  
		}
};
int main()
{
	SIMPLEINTREST si;
	si.simpleintrest();
	return 0;
}