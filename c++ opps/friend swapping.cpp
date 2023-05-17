//Write a program to swap the two numbers using friend function
#include<iostream>
using namespace std;
class swapping{
	private: 
	int a,b;
	public: 
   void getnum()
   {
	cout<<"Value a: ";
	cin>>a;
	cout<<"Value b: ";
	cin>>b;
}
	friend void s1(swapping& x);
	void display()
	{
		cout<<"\nValue of a = "<<a<<"\nValue of b = "<<b<<endl;
	}
};
void s1(swapping& x)
{	
	x.a=x.a+x.b;
	x.b=x.a-x.b;
	x.a=x.a-x.b;
	
}
int main()
{
	swapping obj;
	obj.getnum();
	cout<<"\nBefore Swapping Values: ";
	obj.display();
   	s1(obj);
   	cout<<"\nAfter Swapping Values: ";
   	obj.display();
	return 0;
}


