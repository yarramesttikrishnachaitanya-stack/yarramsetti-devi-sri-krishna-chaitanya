/*local vaiable 

#include<iostream>
using namespace std;
int a=100;
int main()

{
	int a=10;
	cout<<"global variable:"<<::a<<endl;
	cout<<"local variable:"<<a<<endl;
	
}*/
// inline function
#include<iostream>
using namespace std;
inline square(int x){ 
return x*x;

}
inline int max(int a,int b){
	return (a>b)?a:b;
}

int main()
{
	int n=5,p=8;
	cout<<"square of "<<n<<" ="<<square(n)<<endl;
	cout<<"biggest ="<<max(n,p)<<endl;
}

