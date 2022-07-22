#include<iostream>
using namespace std;

class PERSON
{
   public:
   	int age;
   	string member;
   	
   	PERSON()
   	{
   		member = "Jay Joshi";
   		age = 21;
    }
    
};
class STUDENT
{
	public:
		int s1,s2,s3,total;
		float per;
		STUDENT()
		{
			s1= 50;
			s2= 76;
			s3= 78;
			total=s1+s2+s3;
			per = total/(float)3;
		}
};

class TEACHER :public PERSON , public STUDENT 
{
	public:
		int salary;
		TEACHER()
		{
			salary = 100000;
		}
		
		void read()
		{
			cout<<"Name       : "<<member<<endl<<endl;
			cout<<"Age        : "<<age<<endl<<endl;
			cout<<"Persentage : "<<per<<endl<<endl;
		}
		
		void write()
		{
			cout<<"Slary     : "<<salary<<endl<<endl;
		}
};
int main()
{
	TEACHER t;
	t.read();
	t.write();
	
	return 0;
}