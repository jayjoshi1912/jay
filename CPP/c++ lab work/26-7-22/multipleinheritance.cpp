#include<iostream>
using namespace std;

class STUDENT
{
	public:
		int sid;
		char name[10];
		STUDENT()
		{
			sid = 21;
		}
		void gets()
		{
			cout<<"Enter Your Nmae : ";
			cin>>name;
		}
};

class EXTRAMARKS
{
	public:
		int sp ;
		EXTRAMARKS()
		{
			sp = 70;
		}
};

class RESULT :public STUDENT,public EXTRAMARKS
{
	public:
		int s1,s2,total;
		float avg;
		RESULT()
		{
			s1 = 56;
			s2 = 57;
			total = s1+s2;
			avg = (float)total / 2;
		}
		void display ()
		{
			cout<<"Student Id  : "<<sid<<endl;
			cout<<"Student Name : "<<name<<endl;
			cout<<"Sports Mark  : "<<sp<<endl;
			cout<<"Total Marks  : "<<total<<endl;
			cout<<"Percentage Marks : "<<avg<<endl;
		}
		
		
};
int main()
{
	RESULT r;
	r.gets();
	r.display();
	
	
	return 0;
}