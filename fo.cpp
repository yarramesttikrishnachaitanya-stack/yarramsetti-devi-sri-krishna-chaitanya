#include<iostream>
using namespace std;
float abosulte(float var){
	if(var<0.0)
	{
		var=-var;
		return var;
		
	}
}
	int abosulte(int var){
	if(var<0)
	{
		var=-var;
		return var;
		
	}
	
}
int main(){
	int num;
	float n;
	
	cout<<"abosulte of num in float"<<abosulte(-5)<<endl;
	cout<<"absolute of  valuee of 5.5"<<abosulte(5.5f)<<endl;
	return 0;
}
