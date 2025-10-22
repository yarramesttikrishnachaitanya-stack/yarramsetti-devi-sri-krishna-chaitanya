#include<iostream>
using namespace std;
class Shape{
	public :
		Shape(int l,int w)
		{
			length=l;
			width=w;
			
		}
		 virtual int get_Area()
		{
			
			cout<<"this is call to parent class area\n:";
			return 1;
					}
			protected:
			int length,width;
					
};
class Square:public Shape
{
	public:
		Square(int l=0,int w=0):Shape(l,w)
		{
			
		}
		int get_area()
		{
			cout<<"Square area:"<<length*width<<"\n";
			return (length*width);
			
		}
		
};
class Rectangle:public Shape
{
	public:
		Rectangle(int l=0,int w=0):Shape(l,w)
		{
			
		}
		int get_area()
		{
			cout<<"Rectangle area:"<<length*width<<"\n";
			return (length*width);			
		}	
};
int main()
{
	Shape *s;
	Square s1(10,10);
	Rectangle r1(10,20);
	s=&s1;
	s1.get_Area();
	s=&r1;
	r1.get_Area();
	return 0;
	
}
