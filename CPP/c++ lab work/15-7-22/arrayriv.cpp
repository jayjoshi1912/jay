#include<iostream>
using namespace std;

int main()
{
	int arr1[2][2],arr2[2][2],arr3[2][2];
	cout<<"Enter Array 1 "<<endl;
	for(int j=0;j<2;j++)
	{
		for(int k=0;k<2;k++)
		{
			cout<<"Enter Elements ["<<j<<"]["<<k<<"] : ";
			cin>>arr1[j][k];
		}
		
	}
	cout<<"Enter Array 2 "<<endl;
	for(int j=0;j<2;j++)
	{
		for(int k=0;k<2;k++)
		{
			cout<<"Enter Elements ["<<j<<"]["<<k<<"] : ";
			cin>>arr2[j][k];
		}
	}
	cout<<"Array 1 "<<endl;
	for(int j=0;j<2;j++)
	{
		for(int k=0;k<2;k++)
		{
			cout<<arr1[j][k]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Array 2 "<<endl;
	for(int j=0;j<2;j++)
	{
	   for(int k=0;k<2;k++)
	   {
	   	 cout<<arr2[j][k]<<"\t";
	   }
	   cout<<endl;
	}
	cout<<"Addition Of Tow Array "<<endl;
	for(int j=0;j<2;j++)
	{
		for(int k=0;k<2;k++)
		{
			arr3[j][k] = arr1[j][k] + arr2[j][k];
			cout<<arr3[j][k]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}