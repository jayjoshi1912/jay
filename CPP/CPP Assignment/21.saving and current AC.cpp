#include<iostream>
using namespace std;

class ACCOUNT 
{
	public:
		string c_name,t_ac,bn;
		long long ac_num;
		long long bb,dt,cbb,si,cbbi,wd,lcbb,charge,mb;	
		ACCOUNT()
		{
			bn     = "HDFC BANK";
			c_name = "Joshi Jay";
			ac_num = 1353548976543;
			t_ac   = "Saving Account";
		}
		void details()
		{
			cout<<"=================================="<<endl;
			cout<<"    ACCOUNT HOLDER INFORMATION"<<endl<<endl;
			cout<<"=================================="<<endl<<endl;
			cout<<"Bank Name              : "<<bn<<endl<<endl;
			cout<<"Name Of Account Holder : "<<c_name<<endl<<endl;
			cout<<"Account Number Is      : "<<ac_num<<endl<<endl;
			cout<<"Type Of Account Is     : "<<t_ac<<endl<<endl;
		}
};

class saving :public ACCOUNT
{
   public:
     	
     saving()
     {
     	bb = 100000;
     	cout<<endl;
     	cout<<"Bank Balance  : "<<bb<<endl;
	 }
	 
	 void deposit()
	 {
	 	cout<<"-------------------------------------------------------"<<endl;
	 	cout<<"		     Deposit Amount "<<endl<<endl;
	 	cout<<"-------------------------------------------------------"<<endl<<endl;
	 	cout<<"How Much Amount Do Want Deposit   : ";
	 	cin>>dt;
	 	cbb=bb+dt;
	 	cout<<endl;
	 	si = (cbb*5*2.5)/100;
	 	cout<<"Your 5 Year Simple Intrest Is : "<<si<<endl<<endl;
	 	cbbi = cbb+si;
	 	cout<<"Your Current Bank Balance With Intrest Is  : "<<cbbi<<endl<<endl;
	 }
	 
	 void withdraw()
	 {
	 	cout<<"------------------------------------------"<<endl;
	 	cout<<"		        Withdraw Amount "<<endl<<endl;
	 	cout<<"------------------------------------------"<<endl<<endl;
	 	cout<<"How Much Amount Do You Want Withdraw  : ";
	 	cin>>wd;
	 	cout<<endl;
	 	
	 	if(cbbi<wd)
	 	{
	 		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	 		cout<<"Dear Coustmer Your Bank Balance Is Insuffcient"<<endl<<endl;
	 		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
		 }
		 else
		 {
		 	cout<<"Your Amount Withdraw Succesfully "<<endl;
		 	cout<<"-------------------------------------------------------"<<endl;
		 	cout<<"Dear Joshi Jay Your Current Bank Balance Is : "<<(cbbi-wd)<<endl<<endl;
		 	cout<<"-------------------------------------------------------"<<endl;
		 }
	 }
};

class CURRENT :public ACCOUNT
{
	public:
		
		CURRENT()
		{
			mb = 10000;
			bb = 100000;
			cout<<endl;
			cout<<"Bnak Balance : "<<bb<<endl<<endl;
			cout<<"In Your Account Must Be At List : "<<mb<<endl<<endl;
			cout<<"No Intrest Paid On Your Current Account ."<<endl;
			cout<<"Cheque Book Facility Avalible In Your Account ."<<endl;
		}
		void deposita()
		{
		cout<<"------------------------------------------"<<endl;
	 	cout<<"		        Deposit Amount "<<endl<<endl;
	 	cout<<"------------------------------------------"<<endl<<endl;
	 	cout<<"How Much Amount Do You Want To Deposit : ";
	 	cin>>dt;
	 	cbb = bb + dt;
	 	cout<<"Your Current Bank Balance Is : "<<cbb<<endl;
		}
		
		void withdrawa()
		{
		cout<<"------------------------------------------"<<endl;
	 	cout<<"		        Withdraw Amount "<<endl<<endl;
	 	cout<<"------------------------------------------"<<endl<<endl;
	 	cout<<"How Much Amount Do You Want Withdraw : ";
	 	cin>>wd;
	 	cout<<endl;
	 	lcbb = cbb - wd;
	 	if (cbb < wd)
	 	{
	 	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	 		cout<<"Your Bank Balance Is Insuffcient"<<endl<<endl;
	 		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	 		
		 }
		 else
		 {
		 	cout<<"Your Amount Withdraw Succesfully."<<endl;
		 	cout<<"Your Current Bank Balance Is : "<<lcbb<<endl<<endl;
		 	if(lcbb < 10000)
		 	{
		 	   charge = lcbb-1000;
		 	   cout<<"Now your current bank balance less than 10000 so you have to pay penalty RS 1000."<<endl<<endl;
		 	   cout<<"-------------------------------------------"<<endl;
		 	   cout<<"Dear Joshi Jay Your Current Bank Balance Is : "<<charge<<endl<<endl;
		 	   cout<<"---------------------------------------------"<<endl;
			}
		 }
		}
	
};
int main()
{
	int choice;
	ACCOUNT ac;
	ac.details();
	
	cout<<"Account type 1) Saving Ac 2) Current Ac."<<endl<<endl;
	cout<<"Enter Your Choice : ";
	cin>>choice;
	
	if(choice == 1)
	{
		saving s;
		s.deposit();
		s.withdraw();
	}
	else if (choice == 2)
	{
		CURRENT c;
		c.deposita();
		c.withdrawa();
	}
	else 
	{
		cout<<endl;
		cout<<"Enter valid choice 1 or 2 ."<<endl;
	}
	
	return 0;
}