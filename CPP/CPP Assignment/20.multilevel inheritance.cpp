#include<iostream>
using namespace std;

class STUDENT
{
	public:
		int r_no;
		string name;
		STUDENT()
		{
		    name = "Joshi Jay";
			r_no = 7 ;
		}
		void display()
		{
			cout<<"================================="<<endl<<endl;
			cout<<"        STUDENT DETAILS"<<endl<<endl;
			cout<<"================================="<<endl<<endl;
			
			cout<<"Name    : "<<name<<endl<<endl;
			cout<<"Roll No : "<<r_no<<endl<<endl;
		}
		
};
class TEST :public STUDENT
{
	public:
		int s1,s2;
		TEST()
		{
			s1 = 78;
			s2 = 98;
		}
		void print()
		{
			cout<<"================================="<<endl<<endl;
			cout<<"        STUDENT MARKS"<<endl<<endl;
			cout<<"================================="<<endl<<endl;
			cout<<"Maths Mark   : "<<s1<<endl<<endl;
			cout<<"English Mark : "<<s2<<endl<<endl;
		}
	
};
class RESULT :public TEST
{
	public:
		int total;
		float per;
		RESULT()
		{
			total = s1+s2;
			per = total/(float)2;
		}
		void percentage()
		{
			cout<<"------------------------------------"<<endl;
			cout<<"Total Marks   : "<<total<<endl<<endl;
			cout<<"------------------------------------"<<endl<<endl;
			cout<<"================================="<<endl<<endl;
			cout<<"Percentage Is : "<<per<<" %"<<endl<<endl;
			cout<<"================================="<<endl<<endl;
			
		}
};
int main()
{
	RESULT r;
	r.display();
	r.print();
	r.percentage();
	return 0;
}