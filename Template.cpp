#include<iostream>
using namespace std;
template <typename T> T mymax(T x,T y)
{
	return (x>y)?x:y;
}
template <typename T> void myswap(T &x,T &y)
{
	T temp=x;
	x=y;
	y=x;
}
int main()
{
	cout<<mymax<int>(9,7)<<"maximum blw"<<endl;
	cout<<myswap<int>(9,7);
	
}






		
