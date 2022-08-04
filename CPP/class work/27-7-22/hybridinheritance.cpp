#include<iostream>
using namespace std;

class rollid
{
	protected:
		int rollno;
	public:
		void getId(int id)
		{
			rollno = id;
		}
		
		void showId()
		{
			cout<<"\nRolled No is : "<<rollno;
		}
};

class marks :public rollid
{
	protected:
		int sub1,sub2;
		public:
			void getMarks(int s1,int s2)
			{
				sub1 = s1;
				sub2 = s2;
			}
			void showMarks()
			{
				cout<<"\nSubject1 Marks is : "<<sub1;
				cout<<"\nSubject2 Marks is : "<<sub2;
				
			}
};

class Extramarks 
{
   protected:
   int sp;
   public:
   void getSP(int s)
   {
   	   sp = s;
   	
	 }
	 void showSP()
	 {
	 	cout<<"\nSports Marks : "<<sp;
	 }	
};

class Result :public marks , public Extramarks
{
	protected:
		int total;
		public:
			void display()
			{
				total = sub1 +sub2 +sp;
				showId();
				showMarks();
				showSP();
				cout<<"\nTotal Marks : "<<total;
			}
			
			
			
	
};
int main()
{
	Result r;
	r.getId(21);
	r.getMarks(67,78);
	r.getSP(77);
	r.display();
	return 0 ;
}