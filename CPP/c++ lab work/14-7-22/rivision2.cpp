#include<iostream>
using namespace std;

int main()
{
    int arr1[2][2],arr2[2][2],arr3[2][2];
    int a,b;
    cout<<"Enter Array 1 "<<endl;
    for(a=0;a<2;a++)
    {
    	for(b=0;b<2;b++)
    	{
    		cout<<"Enter Elements ["<<a<<"]["<<b<<"] : ";
    		cin>>arr1[a][b];
		}
	}
    system("cls");
    cout<<"Enter Array 2"<<endl;
    for(a=0;a<2;a++)
    {
	
    	for(b=0;b<2;b++)
    	{
    		cout<<"Enter Elements ["<<a<<"]["<<b<<"] : ";
    		cin>>arr2[a][b];
		}
	}
	
	cout<<"Array 1"<<endl;
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++)
		{
			cout<<arr1[a][b]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"Array 2 "<<endl;
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++)
		{
			cout<<arr2[a][b]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"Addition Of Array 1 and Array 2 "<<endl;
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++)
		{
			arr3[a][b]=arr1[a][b] + arr2[a][b];
			cout<<arr3[a][b]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}