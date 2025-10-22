#include <iostream>
using namespace std;


int main() {
	int i,j,n;
	
	cout<<"enter a no"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			cout<<"x";
		}
			cout<<endl;
	}


    return 0;
}
