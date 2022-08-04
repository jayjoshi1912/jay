#include<iostream>
using namespace std;

class ROLLID
{
	protected:
		int rollno;
		public:
			void getid(int id)
			{
				rollno = id;
			}
			
			void showid()
			{
				cout<<"\nRollno Is  = "<<rollno;	
			}
};

class MARKS :public ROLLID 
{
	protected:
		int sub1,sub2;
		public:
			void getmarks(int s1,int s2)
			{
				sub1 = s1;
				sub2 = s2;
			}
			
			void showmarks()
			{
				cout<<"\nSubject 1 :  "<<sub1;
				cout<<"\nSubject 2 :  "<<sub2;
			}
};

class EXTRAMARKS
{
	protected:
		int pt;
	
		public:
			void getextramarks(int p)
			{
				pt = p;
			}
			void showextramarks()
			{
				cout<<"\n\nP.T Marks : "<<pt;
			}
};

class RESULT :public MARKS , public EXTRAMARKS
{
   protected:
     int total;
	 public:
	 	float avg;
	 void print()
	 {
	 	total = sub1+sub2+pt;
	 	showid();
	 	showmarks();
	 	showextramarks();
	 	cout<<"\n\nTotal Marks : "<<total;
	 	avg = total/3;
	 	cout<<"\nPercentage : "<<avg<<endl;
	 }
	
};
int main()
{
	RESULT r;
	r.getid(51);
	r.getmarks(78,98);
	r.getextramarks(88);
	r.print();
	
	return 0;
}