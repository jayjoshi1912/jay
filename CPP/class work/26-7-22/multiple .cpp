#include<iostream>
using namespace std;

class STUDENT
{
	public:
		int sid;
		char sname[10];
		STUDENT()
		{
			sid = 21;
		}
		void getsname()
		{
			cout<<"Enter Your Name : ";
			cin>>sname;
		}
};

class EXTRAMARKS 
 {
 	public:
 		int sp;
 		
 		EXTRAMARKS()
 		{
 		   	sp =67;
	    }
	    
 };
 
 class RESULT :public STUDENT,public EXTRAMARKS
 {
    public:
	   int s1,s2,total;
	   int avg;	
	   RESULT()
	   {
	   	 s1=45;
	   	 s2=56;
	   	 total = s1+s2;
	   	 avg = total/2;
	   }
	   void diaplay()
	   {
	   	 cout<<"\nStudent Id : "<<sid;
	   	 cout<<"\nStudent Name : "<<sname;
	   	 cout<<"\nSports Marks : "<<sp;
	   	 cout<<"\nTotal Marks  : "<<total;
	   	 cout<<"\nAvrege marks : "<<avg;
	   }
 };
int main()
{
	RESULT r;
	r.getsname();
	r.diaplay();
	return 0;
}