#include<iostream>
using namespace std;
class vehicle{
	public :
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
	
		}
};
class car:public vehicle
{
	public :
		car()
		{
			cout<<"this is a car"<<endl;
	
		}
};
class bus:public vehicle{
	public :
	bus()
		{
			cout<<"this is a bus"<<endl;
	
		}
};
int main()
{
	car c1;
	bus b1;
}
