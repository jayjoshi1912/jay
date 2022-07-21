#include<iostream>
using namespace std;

class raw
{
	public:
		
        int a;
  		void gets()
  		{
  		    cout<<"Enter A = ";	
  		    cin>>a;
		}
		void show()
		{
			cout<<a;
		}
};

int main()
{
	raw r;
	r.gets();
	r.show();
	return 0;
}