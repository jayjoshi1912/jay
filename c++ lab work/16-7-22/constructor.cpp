#include<iostream>
using namespace std;

class include
{
	public:
		int a,b;
		include()
		{
			a=15;
			b=20;
		}
	    
	    include(int a,int b)
	    {
	    	this->a = a;
	    	this->b = b;
		}
		
		include(const include &m)
		{
			this->a=m.a;
			this->b=m.b;
			
		}
	    
	    void display()
	    {
	    	cout<<endl<<endl;
	    	cout<<"A = "<<a<<"\tB = "<<b;
		}
		
};
int main()
{
	include in;
	in.display();
	include i(100,200);
	i.display();
	include q(i);
	q.display();
	
	return 0;
}