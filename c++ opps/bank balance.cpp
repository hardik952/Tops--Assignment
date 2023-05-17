/*Define a class to represent a bank account. Include the following members: Data Member: -Name of the depositor
- Account Number - Type of Account - Balance amount in the account Member Functions - assign values - 
To deposited an amount - To withdraw an amount after checking balance -To display name and balance.*/
#include<iostream>
using namespace std;

class bank_account{
	public:
		string name,acc_type;
		int acc_num,balance;
		void member()
		{
		cout<<"Name of the depositor: ";
		cin>>name;
		cout<<"Account Number: ";
		cin>>acc_num;
		cout<<"Type of Account: ";
		cin>>acc_type;
		cout<<"Balance amount in the account: ";
		cin>>balance;
	    }
	    void display()
	    {
	    	cout<<"\nYour name is: "<<name<<"\nAccount number is: "<<acc_num<<"\nAccount type is: "<<acc_type<<"\nYour balance is: "<<balance<<endl;
		}
		void deposite()
		{
			int amt;
			cout<<"\nEnter the amount to Deposite: ";
			cin>>amt;
			balance=balance+amt;
			cout<<"Your account balance after Deposited: "<<balance<<endl;
		}
		void withdraw()
		{
			int amt1;
			cout<<"\nEnter the amount to Withdraw: ";
			cin>>amt1;
			if(amt1<=balance)
			{
			balance=balance-amt1;
			cout<<"\nYour account balance after withdrawal: "<<balance<<endl;
	        }
	        else{
	        	cout<<"\nYour account does not have sufficiant balance!!"<<endl;
			}
		}
};
int main()
{
	int choice;
	bank_account mem1;
	mem1.member();
	cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\n";
	cout<<"\nEnter your choice: ";
	cin>>choice;
	if(choice==1) mem1.display();
	if(choice==2) mem1.deposite();
	if(choice==3) mem1.withdraw();
	return 0;
}
