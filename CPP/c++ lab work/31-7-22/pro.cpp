#include<iostream>
using namespace std;

class Rollno
{
	public:
		int rollno;
		void getid(int ID)
		{
			rollno = ID;
		}
	
};
class Test:public Rollno
{
	public:
		int sub1,sub2,total;
		void getmarks(int s1,int s2)
		{
			sub1=s1;
			sub2=s2;
			total= sub1+sub2;
		}
	
};
class Result:public Test
{
	public:
		
		
		void display()
		{
			cout<<"============================="<<endl;
			cout<<"        STUDENT DETAILS      "<<endl;
			cout<<"============================="<<endl;
			cout<<"ROLL NUMBER :"<<rollno<<endl;
			cout<<"SUBJECT1 MARKS :"<<sub1<<endl;
			cout<<"SUBJECT2 MARKS :"<<sub2<<endl;
			cout<<"TOTAL MARKS :"<<total<<endl;
			
		}
	
	
	
	
};



int main()
{
	Result rs;
	rs.getid(21);
	rs.getmarks(65,89);
	rs.display();
	return 0;
}