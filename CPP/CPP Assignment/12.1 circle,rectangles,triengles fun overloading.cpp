#include<iostream>
using namespace std;

class CRT
{
	public:
		int diaplay(double r)
		{
			return (3.14*r*r);	
		}
		
		int display(int b,int h)
		{
			return (b*h)/2;
		}
		int display(int l,float w)
		{
			return (l*w);
		}
};
int main()
{
	CRT *c = new CRT;
	cout<<endl;
	cout<<"Area Of Circle     : "<<c->diaplay(5)<<endl<<endl;
	cout<<"Area Of Rectangles : "<<c->display(4,4)<<endl<<endl;
	cout<<"Area Of Triengles  : "<<c->display(7,7)<<endl<<endl;
	return 0;
}