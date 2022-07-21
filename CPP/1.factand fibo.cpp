#include<iostream>
using namespace std;

class FF
{
	public:
		int i,n,fact=1;
		void factorial()
		{
			cout<<endl;
			cout<<"Enter Factorial number : ";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			cout<<endl;
			cout<<"fact of loop = "<<fact;
		}
		
		void fibonacci()
		{
			int n1=0,n2=1,n3,a,n;
			cout<<endl<<endl;
			cout<<"Enter Fibonacci Number : ";
			cin>>n;
			cout<<endl;
			cout<<n1<<" "<<n2;
			
			for(a=2;a<=n;a++)
			{
				n3=n1+n2;
				n1=n2;
				n2=n3;
				
				cout<<" "<<n3;
			}
			
			
		}
};

int main()
{
	FF f;
	f.factorial();
	f.fibonacci();
	
	return 0;
}