#include<iostream>
using namespace std;

class SWAP
{ 
   int a ,b;
   friend int value(SWAP);
   public:
     SWAP()
	 {
	 	cout<<"Enter A : ";
	 	cin>>a;
	 	cout<<endl;
	 	cout<<"Enter B : ";
	 	cin>>b;
		cout<<endl;	
     }  	
};
int value(SWAP s)
{
	cout<<"Before Swap A = "<<s.a<<",B = "<<s.b<<endl;
	s.a=s.a+s.b;
	s.b=s.a-s.b;
	s.a=s.a-s.b;
	
	cout<<"After Swap A = "<<s.a<<",B = "<<s.b<<endl;
	return 0;
}
int main()
{
	SWAP s1;
	value(s1);
	return 0;
}