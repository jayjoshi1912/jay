#include<iostream>
using namespace std;

class Fristdemo
{
	public:
		int a;
		void enter()
		{
			cout<<"Eneter A = ";
			cin>>a;
		}
		void show()
		{
			cout<<a;
		}
};
int main()
{
	Fristdemo fd;
	fd.enter();
	fd.show();
	return 0;
}