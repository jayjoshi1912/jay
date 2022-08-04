//friend fun : acsess to privet member.
#include<iostream>
using namespace std;

class JAY
{
	private:
		int money;
		friend int Dhamo(JAY);
		public:
			JAY()
			{
				money = 1000;
			}
		
};

int Dhamo(JAY j)
{
	j.money -= 200;
	return j.money;
}
int main()
{
	JAY j1;
	cout<<"\nmoney provided : "<<Dhamo(j1);
	return 0;
}