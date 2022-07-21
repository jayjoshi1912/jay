#include<iostream>
using namespace std;

class BOOKSHOP
{
	public:
		string nam_Author,nam_title,nam_publisher;
		int price;
		BOOKSHOP()
		{
		   nam_Author ="Joseph Murphy";
		   nam_title ="THE POWER OF SUBCONIUS MIND";
		   price=551;
		   nam_publisher ="Manjul Publishing House";
	    }
};
class DISPLAY :public BOOKSHOP
{
	public:
	     void display()
		{
			cout<<"=================================================="<<endl;
			cout<<"                 BOOK DETAILS  "<<endl;
			cout<<"=================================================="<<endl<<endl;
			cout<<"The Title Of Name : "<<nam_title<<endl<<endl;
			cout<<"Author Name : "<<nam_Author<<endl<<endl;
			cout<<"Book Publisher Is  : "<<nam_publisher<<endl<<endl;
			cout<<"Book Price Is -> "<<price<<endl<<endl;
		}
};


int main()
{
	DISPLAY dp;
	dp.display();
	return 0;
}