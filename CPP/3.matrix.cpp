#include<iostream>
using namespace std;

class ARRAY
{
  public:
  	int m1[2][2],i,j;
  	void array()
  	{
  	cout<<"============================"<<endl;
	cout<<"Enter Matrix 1"<<endl;
	cout<<"============================"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter Elements ["<<i<<"]["<<j<<"] = ";
			cin>>m1[i][j];
		}
    }
    
    cout<<endl;
    

    cout<<"============================"<<endl;
	cout<<" Display matrix 1"<<endl;
	cout<<"============================"<<endl;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" "<<m1[i][j];
		}
		cout<<endl;
	}
   
  	
}
};

int main()
{
	ARRAY ar;
	ar.array();
	
	return 0;
}