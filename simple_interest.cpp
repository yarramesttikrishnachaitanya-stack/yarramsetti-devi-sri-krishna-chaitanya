#include <iostream>
using namespace std;
int main()
{
	int pa,roi,term,s_i;
	cout<<"enter principle amount:"<<endl;
	cin>>pa;
	cout<<"enter rate in amount:"<<endl;
	cin>>roi;
	cout<<"enter term:"<<endl;
	cin>>term;
	s_i=pa*roi*term/100;
	cout<<"simple interest is "<<s_i<<endl;
}

