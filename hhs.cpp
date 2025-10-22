#include<iostream>
using namespace std;
class parent{
	public:
		parent()
		{
			cout<<"this is a parent class constructor"<<endl;
		}
		~parent()
		{
			cout<<"this is a parent class destructor"<<endl;
		}
};
class child:public parent{
	public:
		child()
		{
			cout<<"this is a child class constructor"<<endl;
		}
		~child()
		{
			cout<<"this is a child class destructor"<<endl;
		}
};
int main()
{
	child c1;
	
}
