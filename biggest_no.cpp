#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter first number:"<<endl;
	cin>>a;
	cout<<"enter second number:"<<endl;
	cin>>b;
	cout<<"enter third number:"<<endl;
	cin>>c;
	if(a>b && a>c)
	{
		cout<<a<<" is the biggest number";
		
	}
	else if(b>a && b>c)
	{
		cout<<b<<"is the biggest number";
		
	}
	else{
		cout<<c<<"is the biggest number";
}
}
