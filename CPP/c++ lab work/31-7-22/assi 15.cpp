#include<iostream>
using namespace std;

class ADDITION
{
	public:
		int result1[3],result2[3],result3[3];
		int i;
//		ADDITION(int r1,int r2,int r3)
//		{
//			result1[3] = r1;
//			result2[3] = r2;
//			result3[3] = r3;
//		}
		void result()
		{
			cout<<"Enter Array1 "<<endl;
			for(i=0;i<3;i++)
			{
				cout<<"Enter Elements   "<<i<<": ";
				cin>>result1[i];
			}
			
			cout<<"Array1 are "<<endl;
			for(i=0;i<3;i++)
			{
				cout<<"Elements   "<<i<<": "<<result1[i]<<endl;
			}
			
			cout<<"Enter Array2"<<endl;
			for(i=0;i<3;i++)
			{
				cout<<"Enter Elements   "<<i<<": ";
				cin>>result2[i];
			}
			cout<<"Array1 are "<<endl;
			for(i=0;i<3;i++)
			{
				cout<<"Elements  "<<i<<": "<<result2[i]<<endl;
			}
			cout<<"Addition Of Two Array"<<endl;
			for(i=0;i<3;i++)
			{
				result3[i]=result1[i]+result2[i];
				cout<<"elments  "<<i<<":"<<result3[i]<<endl;
			}
			
			
		}
		
//			Distance operator-()
//	{
//		this->feet = -feet;
//		this->inches = -inches;
//		return Distance(this->feet,this->inches);
//	}
	
//	ADDITION operator+()
//	{
//	    this->result1 = +result1;
//		this->result2 = +result2;
//		this->result3 = +result3;
//		return ADDITION(this->result1,this->result2,this->result3); 
//	}	
//	
//	
		
};
int main()
{
   ADDITION a1;
//   result();
   a1.result();
   	
	return 0;
} 