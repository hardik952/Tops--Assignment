//Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;

inline int multi(int n1,int n2)
{
    return n1*n2;
}
inline int cube(int n1)
{
	return n1*n1*n1;
}
int main()
{
	int a,b;
	cout<<"Enter num1: ";
	cin>>a;
	cout<<"Enter num2: ";
	cin>>b;
	cout<<"\nMultiplication of "<<a<<" and "<<b<<" is = "<<multi(a,b)<<endl;
	cout<<"\nCube of "<<a<<" is "<<cube(a)<<endl;
	cout<<"Cube of "<<b<<" is "<<cube(b)<<endl;
	return 0;
}
