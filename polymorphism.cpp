#include<iostream>
using namespace std;

class Shape{
	public:
	 virtual void draw()
	 {
	 	cout<<"Drawing a generic shape\n";
	 	
		}
		
};
class Circle: public Shape
{
	public:
		void draw() override
		{
			cout<<"drawing a square"<<endl;
		}
};
class Square: public Shape
{
void draw() override
		{
			cout<<"drawing a square"<<endl;
		}
};
class Rectangle: public Shape
{
void draw() override
		{
			cout<<"drawing a Rectangle"<<endl;
		}
};
class Triangle: public Shape
{
void draw() override
		{
			cout<<"drawing a Triangle"<<endl;
		}
};
int main()
{
	Shape *s;
	Circle c1;
	s=&c1;
	s->draw();
	Rectangle r1;
	s=&r1;
 s->draw();
	Triangle t1;
	s=&t1;
	s->draw();
	Square s1;
	s=&s1;
	s->draw();
}

