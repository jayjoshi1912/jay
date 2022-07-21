#include<iostream>
using namespace std;

class FACTandFIBO
{
	public:
		int n,i,fact=1;
		void factorial()
		{
			cout<<endl;
			cout<<"Enter Factorial Number : ";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			cout<<endl;
			cout<<"Fcat Of Loop = "<<fact;
		}
		
		void fibonacci()
		{
			int n1=0,n2=1,n3,n,i;
			cout<<endl<<endl;
			cout<<"Enter Fibonacci Number : ";
			cin>>n;
			cout<<endl;
			cout<<n1<<"\t"<<n2;
			for(i=2;i<=n;i++)
			{
				n3=n1+n2;
				n1=n2;
				n2=n3;
				
				cout<<"\t"<<n3;
			}
			
		}
};

int main()
{
	FACTandFIBO FF;
	FF.factorial();
	FF.fibonacci();
	
	
}