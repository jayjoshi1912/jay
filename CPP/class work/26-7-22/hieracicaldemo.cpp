#include<iostream>
using namespace std;

class side
{
	protected:
		int l;
		public:
			void setval(int X)
			{
				l = X;
			}
			
};

class square :public side
{
	public:
	int Square()
		{
			return l * l;
			
		}
};

class cube : public side
{
   public:
   	int Cube()
   	{
   		return l * l * l;
   }
};
int main()
{
	square sq;
	sq.setval(10);
	cout<<"\nSquare Is : "<<sq.Square();
	
	cube c;
	c.setval(2);
	cout<<"\nCube  is : "<<c.Cube();
	return 0;
}