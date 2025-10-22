#include<iostream>
using namespace std;
int main()
{
	float days;
	float week,year;
	cout<<"enter no of days:"<<endl;
	cin>>days;
	week=days/7;
	cout<<days<<" days ="<<week<<" week"<<endl;
	year=days/365;
	cout<<days<<" days ="<<year<<" year";
}
