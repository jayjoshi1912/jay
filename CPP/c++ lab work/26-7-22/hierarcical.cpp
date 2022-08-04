#include<iostream>
using namespace std;

class RAW
{
	protected:
		int l;
		public:
			void set(int x)
			{
				l = x;
			}
};

class SQUARE :public RAW
{
	public:
		int square()
		{
		  return l * l;
		}
		
};

class CUBE :public RAW
{
	public:
	int cube()
	{
		return l*l*l;
	}
};
int main()
{
	SQUARE s;
	s.set(11);
	cout<<"square is = "<<s.square();
	
	
	CUBE c;
	c.set(7);
	cout<<"\n\ncube is = "<<c.cube();
	return 0;
	
}