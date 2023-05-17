//Write a program of find the simple interest using constructor with dynamic initialization.
/*Make constructor like Interest (int principal, int year, int rate) Interest (int principal, int year,
float rate = 2.5)*/
#include<iostream>
using namespace std;
class interest{
	int principal,year,rate,si;
	public:
		interest(int p,int t,int r)
		{
			principal=p;
			year=t;
			rate=r;
		}
		void setrate()
		{
			cout<<"The Principal: "<<principal<<endl;
			cout<<"Time of period: "<<year<<endl;
			cout<<"The Rate of interest: "<<rate<<endl;
            si=(principal*rate*year)/100;
			cout<<"Your simple interest is= "<<si<<endl; 		
		}
};
class interest1{
	float principal,rate,year;
	float si1;
	public:
	interest1(int p,int t,float r)
	{
		principal=p;
		year=t;
		rate=r;
	}
	void setdata()
	{
		cout<<"\nThe Principal: "<<principal<<endl;
		cout<<"Time of period: "<<year<<endl;
		cout<<"The Rate of interest: "<<rate<<endl;
        si1=(principal*rate*year)/100;
		cout<<"Your simple interest is= "<<si1<<endl;
	}
};
int main()
{
	interest obj(1000,2,12);
	interest1 obj1(2456,2,2.5);
	obj.setrate();
	obj1.setdata();
	return 0;
}
