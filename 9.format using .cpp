#include<iostream>
using namespace std;

class FORMAT
{
   public:
    FORMAT()
	{
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<" Roll No    Sub1    Sub2    Sub3     Total     Percentage"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	
		cout<<"   1         30     25       45        100 ""\t "  <<100/(float)3 <<endl<<endl;
		cout<<"   2         25     20       25         70 ""\t "   <<70/(float)3 <<endl<<endl;
        cout<<"   3         20     15       35         70 ""\t "   <<70/(float)3 <<endl<<endl;
		cout<<"   4         35     30       40        105 ""\t "  <<105/(float)3 <<endl<<endl;
		cout<<"-----------------------------------------------------------"<<endl;	
    }
};
int main()
{
	FORMAT f;
	return 0;
}