#include<iostream>
using namespace std;
int main()
{
	int marks,grade;
	cout<<"enter student marks:";
	cin>>marks;
	grade=marks/10;
	switch(grade)
	{
		case 10:
		cout<<"A+ grade";
		break;
		case 9:
		cout<<"A grade";
		break;
		case 8:
		cout<<"b+ grade";
		break;
			case 7:
		cout<<"b grade";
		break;
			case 6:
		cout<<"c+ grade";
		break;
			case 5:
		cout<<"c grade";
		break;
			case 4:
		cout<<"d grade";
		break;
		case 3:
		cout<<"failed f grade";
		break;
			}			
}
