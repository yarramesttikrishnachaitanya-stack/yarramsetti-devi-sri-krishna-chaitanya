#include<iostream>
using namespace std;
class car{
	public:
	 string brand,model;
	 int mileage=0;
	 void drive(int distance)
	 {
	 	mileage=+distance;	
	 }
	 void show_data()
	 {
	 	cout<<"brand:"<<brand<<endl;
	 	cout<<"model:"<<model<<endl;
	 	cout<<"distance driven:"<<mileage<<"miles"<<endl;
	 }
	 
};
int main()
{

car honda;
honda.brand="honda";
honda.model="civic";
honda.drive(90);
honda.show_data();
}
