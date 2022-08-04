#include<iostream>
using namespace std;

class Box
{
	public:
		double height,width,depth;
		Box(double height,double width,double depth)
		{
//			cout<<"Default Constructor called.";
//			height = 10;
//			width = 5;
//			depth = 6;
           cout<<"perameter constructor called.";
           this->height = height;
           this->width  = width;
           this->depth = depth;
     	}
		void volume ()
		{
			cout<<"volume of Box is : "<<( width* height* depth);
		}
		
};
int main()
{
	Box b(10,5,6);
	b.volume();
	
	return 0;
}