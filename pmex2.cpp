#include<iostream>
using namespace std;
class Animal{
	public:
	 virtual void sound()
	 {
	 	cout<<"animal makes a generic sound\n";

		}
		
};
class Dog: public Animal
{
	public:
		void sound() override
		{
			cout<<"dog makes a barking"<<endl;
		}
};
class Cat : public Animal
{
void sound() override
		{
			cout<<"cat makes a meow sound"<<endl;
		}
};
class Bird: public Animal
{
void sound() override
		{
			cout<<"bird  makes a chirping sound"<<endl;
		}
};


int main()
{
	Animal *s;
	Cat c1;
	s=&c1;
	s->sound();
	Dog d1;
	s=&d1;
 s->sound();
	 Bird b1;
	s=&b1;
	s->sound();
}

