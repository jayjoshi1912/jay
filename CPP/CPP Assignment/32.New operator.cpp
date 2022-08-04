#include<iostream>
using namespace std;

class Addition
{
    public:
    	int a,b;
    	Addition()
    	{
    		cout<<"Enter A : ";
    		cin>>a;
    		cout<<endl;
    		cout<<"Enter B : ";
    		cin>>b;
    		cout<<endl;
    		
		}
		
		void display()
		{
			cout<<"Addition Is : "<<a+b<<endl;
		}
		
};
int main()
{
	Addition *a = new Addition;
	a->display();
	return 0;
}