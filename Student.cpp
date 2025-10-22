#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		string stdname;
		int rollno;
		float marks;
		public: string college;
			void setde(){
				cout<<"enter student name:\n";
				cin.ignore();
				getline(cin,stdname);
				cout<<"enter roll no:";
				cin>>rollno;
				cout<<"enter marks out of 100";
				cin>>marks;				
			}
	void displaydetails()
	{
		cout<<"\n----student detail----\n";
		cout<<"name:"<<stdname<<endl;
		cout<<"rollno:"<<rollno<<endl;
		cout<<"marks:"<<marks<<endl;
		cout<<"college name:"<<college<<endl;
			}		
			
		
	
};
int main()
{
	Student s1;
	cout<<"enter college name:";
	getline(cin,s1.college);
	s1.setde();
	s1.displaydetails();
	s1.college="Aditya University";
	cout<<"\n updated college name:"<<s1.college<<endl;
	return 0;
}

