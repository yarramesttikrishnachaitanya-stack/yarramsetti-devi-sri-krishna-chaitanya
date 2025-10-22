#include<iostream>
#include<string>
using namespace std;
class main1{
	private:
		string name;
		int age;
	public:
	void setDetails(string n,int a)
	{
		name=n;
		age=a;
		}
	void displayDetails()
	{
		cout<<"student name:"<<name<<endl;
		cout<<"student age:"<<age<<endl;
	}			
};
int main()

{
	main1 c;
	c.setDetails("bhagavan ji",18);
	c.displayDetails();
	return 0;
}
