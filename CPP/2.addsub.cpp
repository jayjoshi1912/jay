#include<iostream>
using namespace std;

class ASMD
{
	public:
		int a,b;
		   void display()
		   {
			cout<<"Enter A = ";
			cin>>a;
			cout<<endl;
			cout<<"Enter B = ";
			cin>>b;
			cout<<endl;
			cout<<"A = "<<a<<"\tB = "<<b<<endl<<endl;
		   }
			
			void Addition()
			{
				cout<<"Addition Is = "<<a+b<<endl<<endl;
			}
			void Subtraction()
			{
				cout<<"Subtraction Is = "<<a-b<<endl<<endl;
			}
			void Multiplication()
			{
				cout<<"Multiplication Is = "<<a*b<<endl<<endl;
			}
			void Division()
			{
				cout<<"Division Is = "<<a/(float)b<<endl<<endl;
			}
			
	
};
int main()
{
	ASMD a;
	a.display();
	a.Addition();
	a.Subtraction();
	a.Multiplication();
	a.Division();
	return 0;
}