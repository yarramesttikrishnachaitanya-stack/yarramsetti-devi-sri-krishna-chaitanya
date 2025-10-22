#include<iostream>
using namespace std;
int main(){
	int num,i,j,prod;
	cout<<"enter a number:"<<endl;
	cin>>num;
	cout<<"enter how many numbers to be multiplied"<<endl;
	cin>>j;
	for(i=0;i<=j;i++)
	{
	   prod=num*i;
	   cout<<num<<"*"<<i<<"="<<prod<<endl;
	}
}
