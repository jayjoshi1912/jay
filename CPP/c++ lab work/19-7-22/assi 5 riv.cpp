#include<iostream>
using namespace std;
class ACDETAILS
{
   public:
       string nd,ta;
	   long long acnum,ba=0,da,cbb,wd,cbbw;	
	   ACDETAILS()
	   {
	   	  nd="JAY JOSHI";
	   	  acnum=12172174248472;
	   	  ta="Saving Account";
	   }
	   void display()
	   {
	   	    cout<<"Name Of Account Holder : "<<nd<<endl<<endl;
	   	    cout<<"Acount Num : "<<acnum<<endl<<endl;
	   	    cout<<"Type Of Account : "<<ta<<endl<<endl;
	   } 
	   
	   void deposit()
	   {
	   	cout<<"How Much Amount Do You Want Dposit : ";
	   	cin>>da;
	   	cout<<endl;
	   	cbb=ba+da;
	   	cout<<"Your Current Bank Balance Is : "<<cbb;
	   	cout<<endl;
	   }
	   
	   void withdraw()
	   {
	   	 cout<<"How Much Amount Do You Want Withdraw : ";
	   	 cin>>wd;
	   	 cout<<endl;
	   	 cbbw=cbb-wd;
	   	 cout<<"Your Current Bank Balance Is : "<<cbbw;
	   	 cout<<endl;
	   }
};
int main()
{
	ACDETAILS ad;
	ad.display();
	ad.deposit();
	ad.withdraw();
	return 0;
}