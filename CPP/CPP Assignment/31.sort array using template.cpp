#include<iostream>
using namespace std;
template <class A>
class SORTS
{
	public:
		A arr[10],n,a,b,c;
		void display()
		{
			cout<<endl;
			cout<<"Enter Size Of Array : ";
			cin>>n;
			cout<<endl;
			
			for(a=0;a<n;a++)
			{
				cout<<endl;
				cout<<"Enter Elements ["<<a<<"] ";
				cin>>arr[a];
				cout<<endl;
			}
			
			for(a=0;a<n;a++)
			{
				for(b=a+1;b<n;b++)
				{
					if(arr[a] > arr[b])
					{
						c=arr[a];
						arr[a]=arr[b];
						arr[b]=c;
					}
				}
				cout<<"Sort Elements Is "<<arr[a]<<endl;
			}
		}
		
		
};
int main()
{
	SORTS <int>m;
	m.display();
	return 0;
}