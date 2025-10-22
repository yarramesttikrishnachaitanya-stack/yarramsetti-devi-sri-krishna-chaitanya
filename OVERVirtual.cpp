 #include<iostream>
using namespace std;
class Shape{
	public :
		 virtual void calc()
		{
			cout<<"this is call to parent class area\n:";
			
					}
	 virtual ~Shape()
		{
			cout<<"base class destructor\n";
			
		}
		
					
};
class Rectangle:public Shape
{
	public:
		int width,height,area;
		 
		void calc()
		{
			cout<<"enter width:";
			cin>>width;
			cout<<"enter height:";
			cin>>height;
			area=width*height;
			cout<<"area="<<area;
		}
		virtual ~Rectangle()
		{
			cout<<"Rectangle desstructor  called\n";
		}
		
};
class Square:public Shape
{
	public:
		public:
		int side,area;
	  virtual	~Square()
		{
			cout<<"Square constructor called\n";
		}
		void calc()
		{
			cout<<"\nenter side:\n";
			cin>>side;
			area=side*side;
			cout<<"area=\n"<<area;
	
		}
};
int main()
{
	Shape *s;
	Rectangle r1;
 s=&r1;
	s->calc();
	Square s1;
	s=&s1;
	s->calc();
	return 0;
	
}
