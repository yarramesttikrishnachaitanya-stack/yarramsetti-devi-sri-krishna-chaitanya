#include<iostream>
using namespace std;
class vehicle{
	public :
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
	
		}
};
class fourwheeler:public vehicle{

	public :
		fourwheeler()
		{
			cout<<"this is a  four wheeler vehicle"<<endl;
	
		}
};
class car:public fourwheeler{
	public :
		car()
		{
			cout<<"this is a car"<<endl;
	
		}
};
int main()
{
	car c1;
}

