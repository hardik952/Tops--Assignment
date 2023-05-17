//W.A.P. of to swap the two values using templates
#include<iostream>
using namespace std;
template<class s>
void swapping(s&x,s&y)
{
	s z;
	z=x;
	x=y;
	y=z;
} 
int main()
{
	int x,y;
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the Value of y: ";
	cin>>y;
	swapping(x,y);
	cout<<"After swap:-\nValue of x: "<<x<<"\nValue of y: "<<y;
	return 0; 
}
