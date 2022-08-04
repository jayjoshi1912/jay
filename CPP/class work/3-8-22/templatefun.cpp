#include<iostream>
using namespace std;

template<typename J>
J add(J a,J b)
{
	return a+b;
	
}
template <typename K>
K mul(K x ,K y)
{
	return x*y;
}
template<typename O>
O sub(O a,O b)
{
	return a-b;
}
int main()
{
	cout<<add<int>(10,20)<<endl;
	cout<<add<float>(3.4f,5.4f)<<endl;
	cout<<mul<int>(10,4)<<endl;
	cout<<sub<int>(10,5);
	return 0;
}