#include<iostream>
using namespace std;

class CRICKETER
{
	public:
		
			string name,role,bs;
			long long t_run,age,tm,avg,bestp,no;

		CRICKETER()
		{
			name = "Rohit Sharma";
			role = "Batsman";
			bs   = "Right handed bat";
			no   = 45;
			age  = 32;
			tm   = 633;
			t_run= 21771;
			avg  = t_run/(float)tm;
			bestp= 264;
		}
};
		class BATSMAN :public CRICKETER
		{
			public:
				
				void information()
				{
					cout<<"=~=~=~=~=~=~=~=~=~=~=~=~=~=~="<<endl<<endl;
					cout<<"      BATSMAN DETAILS  "<<endl<<endl;
					cout<<"=~=~=~=~=~=~=~=~=~=~=~=~=~=~="<<endl<<endl;
					cout<<"Batsman Name : "<<name<<endl<<endl;
					cout<<"Batsman Role : "<<role<<endl<<endl;
					cout<<"Batsman style: "<<bs<<endl<<endl;
					cout<<"Batsman Age  : "<<age<<endl<<endl<<endl;
				}
				
				void display()
				{
					cout<<"=~=~=~=~=~=~=~=~=~=~=~=~=~=~="<<endl<<endl;
					cout<<"      BATSMAN CARRER  "<<endl<<endl;
					cout<<"=~=~=~=~=~=~=~=~=~=~=~=~=~=~="<<endl<<endl;
					cout<<"Match Played : "<<tm<<endl<<endl;
					cout<<"Runs         : "<<t_run<<endl<<endl;
					cout<<"Highest      : "<<bestp<<endl<<endl;
					cout<<"Average      : "<<avg<<endl<<endl;
				}
				
			
		};
		

int main()
{
	BATSMAN b;
	b.information();
	b.display();
	return 0;
}