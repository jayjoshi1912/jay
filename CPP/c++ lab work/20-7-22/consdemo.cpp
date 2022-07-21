#include<iostream>
using namespace std;

class condemo
{
  public:
     double a,b;
	 condemo()
	 {
	 	cout<<"Default con called"<<endl;
	 	a=57;
	 	b=60;
	 	cout<<endl;
	 }
	 
	 condemo(double A,double B)
	 {
	 	cout<<endl;
	 	cout<<"perameter con called"<<endl;;
	 	a=A;
	 	b=B;
	 	cout<<endl;
	 }	
	 condemo (const condemo &c)
	 {
	 	cout<<endl;
	 	cout<<"copy con called"<<endl;;
	 	a=c.a;
	 	b=c.b;
	 	cout<<endl;
	 }
	 void display()
	 {
	 	cout<<"\tA = "<<a<<"\tB = "<<b;
	 }
	 
	 
};
int main()
{
	condemo cd;
	cd.display();
	condemo cd2(23,45);
	cd2.display();
	condemo cd3(cd2);
	cd3.display();
	
	return 0;
}

