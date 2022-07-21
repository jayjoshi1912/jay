#include<iostream>
using namespace std;
class ACCOUNT
{
	public:
		string ND,TA;
		long long ACNUM,BA=0,da,cbb,wd,cbbw;
		
		ACCOUNT()
		{
			ND="Jay Joshi";
			ACNUM=98675432123467;
			TA="Saving Account";
		}
		void Display()
		{
			cout<<"============================="<<endl;
			cout<<"       BANK OF BARODA"<<endl;
			cout<<"============================="<<endl<<endl;
			cout<<"Account Holder Name : "<<ND<<endl<<endl;
			cout<<"Account Number      : "<<ACNUM<<endl<<endl;
			cout<<"Type Of Account     : "<<TA<<endl<<endl<<endl;
			cout<<"Bank Balance IS     : "<<BA<<endl<<endl;	
		}
		
		void depositamount()
		{
			cout<<"============================="<<endl;
			cout<<"        DEPOSIT"<<endl;
			cout<<"============================="<<endl<<endl;
			cout<<"How Much Amount Do You Want To Deposit : ";
			cin>>da;
			cout<<endl;
			cbb=BA+da;
			cout<<"--------------------------------------"<<endl;
			cout<<"Your Current Bank Balance Is : "<<cbb<<endl;
			cout<<"--------------------------------------"<<endl<<endl;
		}
		void withdraw()
		{
			cout<<"============================="<<endl;
			cout<<"       WITHDRAW"<<endl;
			cout<<"============================="<<endl<<endl;
			cout<<"How Much Amount Do You Want To Withdraw : ";
			cin>>wd;
			cout<<endl;
			cout<<"Your Amount Withdraw Is Succesfully"<<endl;
			cbbw=cbb-wd;
			cout<<"---------------------------------------"<<endl;
			cout<<"Your Current Bank Balance Is : "<<cbbw<<endl;
			cout<<"----------------------------------------"<<endl<<endl;			
	    }
	
		
};
int main()
{
	ACCOUNT ac;
	ac.Display();
	ac.depositamount();
	ac.withdraw();
	return 0;
}