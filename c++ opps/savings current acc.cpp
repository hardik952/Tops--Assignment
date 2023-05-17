/*Assume that a bank maintains two kinds of accounts for customer, one called as saving account and other as 
current account. Saving accounts provides Simple interest and withdraw facilities but no cheque book facility. 
The current account provides cheque book facility but no interest. 
Current account holders should maintain a minimum balance and if the balance falls below 
this level a service charges is imposed. Create a class account that stores customer name, account number 
and type of account. From this derive classes curr_acc and sav_acct to make them more specific to 
their requirements Include necessary member functions in order to achieve the following tasks 
a.Accepts deposit from a customer and update balance. b.Display the balance. c.Compute and deposit interest. 
d.Permit withdraws and updates the balance. e.Check for the minimum balance,impose penalty,necessary 
and update the balance.*/
#include<iostream>
using namespace std;
class info{
	public: 
	string acc_name;
	int acc_type,acc_num,acc_bal,amt;
	void getinfo()
	{
	cout<<"\nEnter Account Holder Name: ";
	cin>>acc_name;
	cout<<"Enter Account Number: ";
	cin>>acc_num;
	cout<<"1. Savings Account\n2. Current Account\nEnter No. of Account Type: ";
	cin>>acc_type;
	cout<<"\nEnter Balance amount of Bank Account:  ";
    cin>>acc_bal;
	}
	void setinfo()
	{
		cout<<"\nCustomer name is: "<<acc_name<<"\nCustomer Account Number is: "<<acc_num<<endl;
		if(acc_type==1)
		{
			cout<<"Account type = Savings Account"<<endl;
		}
		else
		{
			cout<<"Account type = Current Account"<<endl;
		}
	}
	
    void display()
    {
    	cout<<"\nYour Account Balance is: "<<acc_bal<<endl;
	}
	void dipo()
	{
	 cout<<"\nEnter the Amount to Deposite: ";
	 cin>>amt;
	 acc_bal= amt+acc_bal;
     display();  
	}
	void withd()
	{
	cout<<"\nEnter the Amount to Withdraw: ";
	cin>>amt;
	if(acc_bal>amt)
	{
	acc_bal=acc_bal-amt;	
	display();
	}
	else
	{
	cout<<"Insuficient Balance.";
	}
	}
};
class curr_acc:public info{
	public:
		void penalty()
		{
			if(acc_bal<200 && acc_type==2)
			{
				acc_bal=acc_bal-100;
				cout<<"Your account balance is too low, so panelty is imposed."<<endl;
	            display();   		
			}
			else
			{
				cout<<"No Penalty."<<endl;
			}
		}
};
class sav_acc:public info{
	public:
		int time;
	void interest()
	{
		cout<<"Enter the Time Peroid in years:  ";
		cin>>time;
		acc_bal=acc_bal+((acc_bal*5*time)/100);
		display();
	}	
};
int main()
{
	curr_acc cus1;
	sav_acc cs1;
	cs1.getinfo();
	cs1.setinfo();
	cs1.dipo();
	cs1.interest();
	cus1.getinfo();
	cus1.setinfo();
	cus1.withd();
	cus1.penalty();
	return 0;
}
