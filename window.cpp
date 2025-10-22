#include<iostream>
#include<string>
using namespace std;


 void printDetails(string name,int rollno)
{
	cout<<"\n--student details:\n";
	cout<<"name:"<<name<<"\nroll no:"<<rollno<<endl;
	
}
 void printDetails(string name,string subject)
{
	
	cout<<"\n teacher details\n";
	cout<<"name"<<name<<"\n subject:"<<subject<<endl;
}
	

 void printDetails(string courseName,float duration){
	cout<<"\ncourse details:\n";
	cout<<"course name :"<<courseName<<"\nDuration:"<<duration<<"months"<<endl;
	
}
int main()
{
	int choice;
	cout<<"select option:\n";
	cout<<"1.print student details:\n";
	cout<<"2.print teacher details:\n";
	cout<<"3.print course details:\n";
	cout<<"enter a choice:";
	cin>>choice;
	cin.ignore();
	if(choice==1){
		string name;
		int roll;
		cout<<"enter student name:";
		getline(cin,name);
		cout<<"enter rollno:";
		cin>>roll;
		printDetails(name,roll);
		
		
	}
	 else if(choice==2){
		string name0;
		string sn;
		cout<<"enter teacher name:";
		getline(cin,name0);
		cout<<"enter subject:";
		getline(cin,sn);
		printDetails(name0,sn);
		
		
	}
	 else if(choice==3){
		string name1;
		float time;
		cout<<"enter course  name:";
		getline(cin,name1);
		cout<<"enter course duration";
		cin>>time;
		printDetails(name1,time);		
		
	}
	else
	{
		cout<<"invalid choice:"<<endl;
		
	}
	return 0;
	
	
}
