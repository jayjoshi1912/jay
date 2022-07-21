#include<iostream>
using namespace std;

class tom 
{
	public:
		int a,b;
		void gets()
		{
			cout<<"A = ";
			cin>>a;
			cout<<"B = ";
			cin>>b;
		}
		void show()
		{
			cout<<a<<endl;
			cout<<b;
		}	
};

int main()
{
	tom t;
	t.gets();
	t.show();
	return 0;
}