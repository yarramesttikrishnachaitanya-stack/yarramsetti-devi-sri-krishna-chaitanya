#include<iostream>
using namespace std;
class complex{
	private:
		int real,imag;
	public:
	complex(int r=0,int i=0)
	{
		real=r;
		imag=i;
		}
	friend complex operator+(complex obj1,complex obj2);
		
	
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
			
		}
		
};
complex operator+(complex obj1,complex obj2)
{
	complex temp;
		temp.real=obj1.real+obj2.real;
		temp.imag=obj1.imag+obj2.imag;
		return temp;
}
int main()
{
	complex c1(3,4);
	complex c2(5,6);
	complex c3=c1+c2;
	cout<<"first obj"<<endl;
	c1.display();
    cout<<"second obj"<<endl;
	c2.display();
	cout<<"sum of 1st & 2nd  obj"<<endl;
	c3.display();
}
