//W.A.P. of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class matrix{
	int num[2][2],i,j;
	public: 
	int getvalues()
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			cout<<"Enter the Elements: ";
			cin>>num[i][j];
	        }
		}
	}
	int display()
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			cout<<num[i][j];
	        }
		cout<<endl;
		}
	}
int operator +(matrix x);
};
int matrix::operator +(matrix x)
{
	int c[2][2];
	cout<<"Addition of Two Matrix: \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=num[i][j]+x.num[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	matrix a,b;
	a.getvalues();
	b.getvalues();
	cout<<"-----First Matrix----"<<endl;
	a.display();
	cout<<"-----Second Matrix----"<<endl;
	b.display();
	a+b;
	
	return 0;
}
