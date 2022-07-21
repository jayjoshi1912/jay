#include<iostream>
using namespace std;
class ARRAY 
{
	public:
		int m1[2][2],m2[2][2],m3[2][2],i,j;
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
	        cout<<"Enter Matrix 2"<<endl;
        	cout<<"============================"<<endl;
        	
        	for(i=0;i<2;i++)
        	{
        		for(j=0;j<2;j++)
        		{
        			cout<<"Enter Elements["<<i<<"]["<<j<<"] = ";
        			cin>>m2[i][j];
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
					cout<<"\t"<<m1[i][j];
				}
				cout<<endl;
			}
			cout<<endl;
			
			cout<<"============================"<<endl;
			cout<<" Display matrix 2"<<endl;
			cout<<"============================"<<endl;
			
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<"\t"<<m2[i][j];
				}
			    cout<<endl;
			}
			
			cout<<"=================================================="<<endl;
			cout<<"Addition Of Matrix 1 And Matrix 2 Elements "<<endl;
			cout<<"=================================================="<<endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					m3[i][j]=m1[i][j]+m2[i][j];
					cout<<"\t"<<m3[i][j];
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