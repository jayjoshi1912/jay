#include<iostream>
using namespace std;
template<typename j>
j jay(j a,j b)
{
	j c;
	cout<<"Before Swap A = "<<a<<"\tB = "<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"Aftre Swap A = "<<a<<"\tB = "<<b<<endl;
	return 0;
}

int main()
{
	int a,b;
	cout<<"Enter A : ";
	cin>>a;
	cout<<endl;
	cout<<"Enter B : ";
	cin>>b;
	cout<<endl;
	jay(a,b);

	return 0;
}