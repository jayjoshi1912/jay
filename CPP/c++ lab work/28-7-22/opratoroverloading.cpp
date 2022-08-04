#include<iostream>
using namespace std;

class A
{
	private:
		int feet,inches;
		public:
			A(int f,int i)
			{
				feet = f;
				inches = i;
			}
			
			void display()
			{
				cout<<"Feet = "<<feet<<"\t\tInches = "<<inches;
			}
			A operator-()
			{
				this->feet = -feet;
				this->inches = -inches;
				return A(this->feet , this->inches);
			}
};
int main()
{
	A a(5,6),a1(7,8);
	-a;
	a.display();
	-a1;
	a1.display();
	return 0;
}
