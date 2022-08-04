#include<iostream>
using namespace std;

class CONSTRUCTOR
{
	public:
		double width,height,depth;
		CONSTRUCTOR()
		{
			cout<<"Default Constructor Called."<<endl;
			width = 5;
			height = 25;
			depth = 125;
		}
		
		CONSTRUCTOR(double width, double height , double depth)
		{
			cout<<"\n\nPerameterized Constructor Called ."<<endl;
			this->width = width;
			this->depth = depth;
			this->height = height;
		}
		
		CONSTRUCTOR (const CONSTRUCTOR &c)
		{
			cout<<"\n\nCopy Constructor Called."<<endl;
			this->width = c.width;
			this->depth = c.depth;
			this->height = c.height;
		}
		void display()
		{
			cout<<"volume of Constructor is : "<<(width*height*depth);
		}
};
int main()
{
	CONSTRUCTOR c;
	c.display();
	CONSTRUCTOR c1(7,8,9);
	c1.display();
	CONSTRUCTOR c2(c);
	c2.display();
	return 0;
}