#include<iostream>
using namespace std;
int main()
{
	int num,digit,temp;
	digit=0;
	
	cout<<"enter a no to check if it is a palindrome "<<endl;
	cin>>num;
	while(num>0)
	{
		num=num%10;
		digit=digit*10+num;
		num=num/10;
		
		}	
if(num==digit){
	cout<<digit<<"is a palindrome";
}	
else{
	cout<<digit<<"is not a palindrome:";
}
}
