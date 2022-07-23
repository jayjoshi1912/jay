#include<iostream>
using namespace std;

class SI
{
	public:
		int pa;
		float rate , year;
		SI()
		{
			rate = 2.5;
		}
	   void si()
		{
			cout<<"================================="<<endl;
			cout<<"          SIMPLE INTREST "<<endl<<endl;
			cout<<"================================="<<endl<<endl;
			
			cout<<"Principal Amount        : ";
			cin>>pa;
			cout<<endl<<endl;
			cout<<"Year                    : ";
			cin>>year;
			cout<<endl<<endl;
			cout<<"Rate                    : "<<rate<<endl<<endl<<endl;
			cout<<"Simple Intrest Is       : "<<(pa*year*rate)/(float)100;
			
		}
};
int main()
{
	SI s;
	s.si();
	return 0;
}