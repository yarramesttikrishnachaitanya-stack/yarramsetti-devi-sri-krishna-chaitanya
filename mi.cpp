#include<iostream>
using namespace std;
class lv{
	public:
		lv()
		{
			cout<<"this is a land vehicle"<<endl;
			
		}
};
class wv{
	public:
		wv()
		{
			cout<<"this is a water vehicle"<<endl;
			
		}
};
class av:public lv,public wv
{
	public:
		av()
		{
			cout<<"this is an amphibious vehicle"<<endl;
			
		}
};
int main()
{
	av a;
	
}
