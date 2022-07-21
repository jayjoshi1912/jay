#include<iostream>
using namespace std;

int main()
{
	int m1[3][3],m2[3][3],m3[3][3];
	int a,b;
	cout<<"============================"<<endl;
	cout<<"Enter Matrix 1"<<endl;
	cout<<"============================"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			cout<<"Enter Elements["<<a<<"]["<<b<<"] : ";
			cin>>m1[a][b];
		}
	}
	cout<<"============================"<<endl;
	cout<<"Enter Matrix 2"<<endl;
	cout<<"============================"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			cout<<"Enter Elements["<<a<<"]["<<b<<"] : ";
			cin>>m2[a][b];
		}
	}
	cout<<"============================"<<endl;
	cout<<"matrix 1"<<endl;
	cout<<"============================"<<endl;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			cout<<m1[a][b]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"============================"<<endl;
	cout<<"matrix 2"<<endl;
	cout<<"============================"<<endl;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			cout<<m2[a][b]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"=================================================="<<endl;
	cout<<"Addition Of Matrix 1 And Matrix 2 Elements "<<endl;
	cout<<"=================================================="<<endl;
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			m3[a][b] = m1[a][b] + m2[a][b];
			cout<<m3[a][b]<<"\t";
		}
		cout<<"\n";
	}
}
