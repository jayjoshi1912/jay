#include<iostream>
using namespace std;

class LECTURE
{
   public:
     string lname1,sub1,course1,lname2,sub2,course2,lname3,sub3,course3,lname4,sub4,course4,lname5,sub5,course5;
     int number1,number2 ,number3,number4,number5;
     
     void lecdetails()
     {
     	cout<<endl;
     	cout<<"-----------------------------------"<<endl;
     	cout<<"      LECTURE DETAILS"<<endl<<endl;
     	cout<<"-----------------------------------"<<endl<<endl;
     	cout<<"Lecture Number : ";
     	cin>>number1;
     	cout<<"Lecturer Name  : "<<endl;
     	cin>>lname1;
     	cout<<"Subject Name   : "<<endl;
     	cin>>sub1;
     	cout<<"Course Nmae    : "<<endl;
     	cin>>course1;
     	cout<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	cout<<"Lecture Number : ";
     	cin>>number2;
     	cout<<"Lecturer Name  : "<<endl;
     	cin>>lname2;
     	cout<<"Subject Name   : "<<endl;
     	cin>>sub2;
     	cout<<"Course Name    : "<<endl;
     	cin>>course2;
     	cout<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	cout<<"Lecture Number : ";
     	cin>>number3;
     	cout<<"Lecturer Name  : "<<endl;
     	cin>>lname3;
     	cout<<"Subject Name   : "<<endl;
     	cin>>sub3;
     	cout<<"Course Name    : "<<endl;
     	cin>>course3;
     	cout<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	cout<<"Lecture Number : ";
     	cin>>number4;
     	cout<<"Lecturer Name  : "<<endl;
     	cin>>lname4;
     	cout<<"Subject Name   : "<<endl;
     	cin>>sub4;
     	cout<<"Course Name    : "<<endl;
     	cin>>course4;
     	cout<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	cout<<"Lecture Number : ";
     	cin>>number5;
     	cout<<"Lecturer Name : "<<endl;
     	cin>>lname5;
     	cout<<"Subject Name  : "<<endl;
     	cin>>sub5;
     	cout<<"Course Name   : "<<endl;
     	cin>>course5;
     	cout<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
	 }
	 
	 void print()
	 {
	 	cout<<endl;
     	cout<<"-----------------------------------"<<endl;
     	cout<<"       LECTURE DETAILS ARE "<<endl<<endl;
     	cout<<"-----------------------------------"<<endl<<endl;
     	cout<<"Lecture number : "<<number1<<endl<<endl;
     	cout<<"Lecturer Name  : "<<lname1<<endl<<endl;
     	cout<<"Subjct  Name   : "<<sub1<<endl<<endl;
     	cout<<"Course Name   : "<<course1<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	cout<<"Lecture Number : "<<number2<<endl<<endl;
     	cout<<"Lecturer Name  : "<<lname2<<endl<<endl;
     	cout<<"Subject Name   : "<<sub2<<endl<<endl;
     	cout<<"Course Name    : "<<course3<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	cout<<"Lecture Number : "<<number3<<endl<<endl;
     	cout<<"Lecturer Name  : "<<lname3<<endl<<endl;
     	cout<<"Subject Name   : "<<sub3<<endl<<endl;
     	cout<<"Course Name    : "<<course3<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	cout<<"Lecture Number : "<<number4<<endl<<endl;
     	cout<<"Lecturer Name  : "<<lname4<<endl<<endl;
     	cout<<"Subject Name   : "<<sub4<<endl<<endl;
     	cout<<"Course Name    : "<<course4<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	cout<<"Lecture Number : "<<number5<<endl<<endl;
     	cout<<"Lecturer Name  : "<<lname5<<endl<<endl;
     	cout<<"Subject Name   : "<<sub5<<endl<<endl;
     	cout<<"Course Name    : "<<course5<<endl<<endl;
     	cout<<"================================================="<<endl<<endl;
     	
     	
     	
     	
	 }
};

int main()
{
	LECTURE lc;
	lc.lecdetails();
	lc.print();
	return 0;
}