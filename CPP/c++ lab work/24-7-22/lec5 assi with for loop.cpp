#include<iostream>
#include<conio.h>
using namespace std;

class lecture
{
	public:
	
	char nam_lec[20],nam_sub[20],nam_course[20];
	int num_lec;
	
	lecture()
	{
		cout<<"Lecture Number : ";
		cin>>num_lec;
		cout<<endl;
		fflush(stdin);
		cout<<"Lecturer Name   : ";
		gets(nam_lec);
		cout<<endl;
		cout<<"Subject Name   : ";
		cin>>nam_sub;
		cout<<endl;
		cout<<"Course Nmae    : ";
		cin>>nam_course;
	}
	void details()
	{
		cout<<"Lecture Number  : "<<num_lec<<endl<<endl;
		cout<<"Lecturer Name   : "<<nam_lec<<endl<<endl;
		cout<<"Subject Name    : "<<nam_sub<<endl<<endl;
		cout<<"Course Name     : "<<nam_course<<endl<<endl;
	}
};
int main()
{
	for(int i=0;i<5;i++)
	{
		lecture l;
		l.details();
	}
	return 0;
}