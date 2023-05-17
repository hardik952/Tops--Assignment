//W.A.P.to concatenate the two strings using Operator Overloading.
#include<iostream>
using namespace std;
class concat{
	public: 
	string str;
    void getstr()
	{
		cout<<"Enter String : ";
		cin>>str;
	}
	void setstr()
	{
		cout<<str<<endl;
	}
	int operator +(concat x); 
};
int concat::operator +(concat x)
{
	
	string name;
	name=str+x.str;
	cout<<"Your Name is: "<<name<<endl;
}
int main()
{
	concat n1,n2;
	n1.getstr();
	n1.setstr();
	n2.getstr();
	n2.setstr();
	n1+n2;
	return 0;
}
