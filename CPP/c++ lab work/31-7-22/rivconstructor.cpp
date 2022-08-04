#include<iostream>
using namespace std;

class CONSTRUCTOR
{
	public:
		double height, width,depth;
		
		CONSTRUCTOR()
		{
			cout<<"Default constructor";
			height = 21;
			width = 33;
			depth = 25;
		}
		
		CONSTRUCTOR(double height , double width , double depth)
		{
			cout<<"Perameter Constructor";
			this->height = height;
			this->width = width;
			this->depth = depth;
		}
		
		CONSTRUCTOR(const CONSTRUCTOR &c)
		{
			cout<<"Copy Constructor";
			this->height = c.height;
			this->width = c.width;
			this->depth = c.depth;
		}
		
		void volum()
		{
			cout<<"\nvoium is : "<<(height*width*depth);
		}
		
}
int main()
{
	CONSTRUCTOR c;
	c.volum();
	CONSTRUCTOR jay(10,2,2);
	jay.volum();
	CONSTRUCTOR ankit(jay);
	ankit.volum();
	return 0;
}