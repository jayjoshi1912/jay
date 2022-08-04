#include<iostream>
using namespace std;

class ACCOUNT 
{
	public:
		string name,bn;
		long long ac_no , mn;
		ACCOUNT()
      {
      	bn = "punjab bank";
      	name = "Jay Joshi";
      	ac_no = 789246346278;
      	mn = 7864537891;
	  }
	  void detail()
	  {
	  	cout<<"==================================="<<endl;
	  	cout<<"       COUSTMER DETAILS"<<endl;
	  	cout<<"==================================="<<endl<<endl;
	  	cout<<"Bank Name        : "<<bn<<endl<<endl;
	  	cout<<"Bank Holder Nmae : "<<name<<endl<<endl;
	  	cout<<"Account Number   : "<<ac_no<<endl<<endl;
	  	cout<<"Moblie Number    : "<<mn<<endl<<endl;	
	  }
};
	  class SAVING
	  {
	  	public:
	  		long long bb,dt,cbb,si,cbbi,wd;
	  		SAVING()
	  		{
	  		    bb=100000;
	  		    cout<<"Bank Balance Is : "<<bb<<endl;
		    }
		    
		    void deposit()
	        {
	        	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        	cout<<"       Deposit Amount "<<endl;
	        	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	        	cout<<"How Much Amount Do You Want To Deposit : ";
	        	cin>>dt;
	        	cbb=bb+dt;
	        	cout<<endl;
	        	si=(cbb*2*2.5)/100;
	        	cout<<"2 year simple intrest is :  "<<si<<endl;
	        	cbbi=cbb+si;
	        	cout<<"-------------------------------------------------------"<<endl<<endl;
	        	cout<<"Dear Coustmer You Current Bank Blance Is : "<<cbbi<<endl<<endl;
	        	cout<<"-------------------------------------------------------"<<endl<<endl;
			}	
			
			void withdraw()
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        	cout<<"       Withdraw Amount "<<endl;
	        	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	        	cout<<"How Much Amount Do You Want To Withdraw : ";
	        	cin>>wd;
	        	cout<<endl;
	        	if(cbbi < wd)
	        	{
	        		cout<<"Your Account bank Balance Insuffcient ";
				}
				else
				{
					cout<<"Your Withdraw Amount Succesfully "<<endl;
					cout<<"--------------------------------------------"<<endl;
					cout<<"Dear Coustomer Your Bank Balance Is : "<<(cbbi-wd)<<endl;
					cout<<"--------------------------------------------"<<endl<<endl;
				}
				
			}
	  };
	  
	  class CURRENT
	  {
	  	public:
	  		long long mb,balance,deposit,curbal,withdraw,lcbb,charge;
	  		
	  		CURRENT()
	  		{
	  			mb = 10000;
	  			balance = 100000;
	  			cout<<"Bank Balance Is : "<<balance<<endl;
	  			cout<<"In You Account Must Be At List :  "<<mb<<endl;
	  			cout<<"cheque BOok Facility Avalibale In Your Account "<<endl;
	  			cout<<"Simple Intrest Not Include In Your Current Account "<<endl;
			}
			
			void deposita()
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        	cout<<"       Deposit Amount "<<endl;
	        	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	        	cout<<"How Much Amount Do You Want To Deposit : ";
	        	cin>>deposit;
	        	curbal = balance + deposit;
	        	cout<<"-----------------------------------------------------------"<<endl<<endl;
	        	cout<<"Dear Customer Your Current Bank Balance Is : "<<curbal<<endl<<endl;
	        	cout<<"-----------------------------------------------------------"<<endl<<endl;
	        	
			}
			
			void withdrawa()
			{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	        	cout<<"       Withdraw Amount "<<endl;
	        	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	        	cout<<"How Much Amount Do You Want To Withdraw : ";
	        	cin>>withdraw;
	        	cout<<endl;
	        	lcbb = curbal - withdraw;
	        	if(curbal < withdraw)
	        	{
	        		cout<<"Your Account bank Balance Insuffcient ";
				}
				else
				{
					cout<<"Your Withdraw Amount Succesfully"<<endl;
					cout<<"Dear Customer Your Current bank Blance Is : "<<lcbb<<endl;
					if(lcbb<10000)
					{
						charge = lcbb-1000;
						cout<<"Now Your Current Bank Balance Less Than 10000 So You Paid Panlity RS 1000. "<<endl;
						cout<<"Dear Customer Your Current Bank Balance Is :  "<<charge<<endl;
					}
				}
	        	
			}
	  };
		

int main()
{
	int choice;
	ACCOUNT ac;
	ac.detail();
	
	cout<<"Account Type 1) Saving AC 2) Current AC "<<endl;
	cout<<"Enter Your Choice : ";
	cin>>choice;
	if(choice == 1)
	{
		SAVING s;
		s.deposit();
		s.withdraw();
	}
	if(choice == 2)
	{
		CURRENT c;
		c.deposita();
		c.withdrawa();
	}
	return 0;
	
}