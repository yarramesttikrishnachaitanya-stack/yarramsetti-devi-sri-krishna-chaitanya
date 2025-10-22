#include<iostream>
using namespace std;
class Bankac
{
	private:
		int acno;
		string name;
		float balance;
	public:
	void createac()
	{
		cout<<" enter account number:"<<endl;
		cin>>acno;
		cin.ignore();
		cout<<"enter account holder name:"<<endl;
		cin>>name;
		getline(cin,name);
		cout<<"enter intial balance:"<<endl;
		cin>>balance;
		cout<<"account created sucessfully:"<<endl;
	
			
				
		}	
		void deposit(){
			float amount;
			cout<<"enter amount to deposit "<<endl;
			cin>>amount;
			if(amount>0)
			{
				balance+=amount;
				cout<<"$"<<amount<<"deposited sucessfully:"<<endl;
				
			}
			else{
				cout<<"invalid deposit ammount"<<endl;
				
			}
		}
		void withdraw()
		{
			
			
			float amount;
			cout<<"enter amount to withdraw:"<<endl;
		cin>>amount;
		if(amount>0 && amount<=balance){
			balance-=amount;
			cout<<amount<<"withdraw sucessfully:"<<endl;
			
		}
		else{
			cout<<"insufficent balance"<<endl;
			
		}
		
		}
		void displaybalance() const
		{
			cout<<"\n---account details---\n";
			cout<<"Account number:"<<acno<<endl;
			cout<<"account number:"<<name<<endl;
			cout<<"current balance:"<<balance<<endl;
		}
		
};
int main()
{
	Bankac myac;
	myac.createac();
	int choice;
	do{
		cout<<"\n---Bank Menu---\n";
		cout<<"1.deposit\n";
		cout<<"2.withdraw\n";
		cout<<"3.display balance\n";
		cout<<"4.exit\n";
		cout<<"enter your choice:";
		cin>>choice;
		switch(choice)
		
		{
		case 1:
		myac.deposit();
		break;
		case 2:
		myac.withdraw();
		break;
		case 3:
		myac.displaybalance();
		break;
		case 4:
		cout<<"thanks for using banking system:\n";
		break;
		default:
		cout<<"invalid choice.please try again\n";
			
			
		}
			
	}while(choice!=4);
     return  0;
	
   
}
