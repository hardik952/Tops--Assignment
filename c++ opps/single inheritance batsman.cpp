/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. 
Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data.
(Single Inheritance)*/
#include<iostream>
using namespace std;

class cricketer{
	public:
		int m_num;
			string c_name;
			
		void info()
		{
			cout<<"Enter the name of Cricketer: ";
			cin>>c_name;
	 		cout<<"Enter the number of matches: ";
			cin>>m_num; 
		}
		void showinfo()
		{
			cout<<"\nBatsman name is: "<<c_name<<"\nNumber of matches: "<<m_num<<endl;
		}
};
class batsman:public cricketer{
	public:
		int b_run,b_performance,b_notout;
		float average,b_run1;
		void getbats()
		{
			cout<<"Enter Total Runs: ";
			cin>>b_run;
			cout<<"Enter number of times batsman remain not out: ";
			cin>>b_notout;
			cout<<"Enter best Performance: ";
			cin>>b_performance;			
		}
		void setbats()
		{
			cout<<"Total runs of batsman: "<<b_run<<endl;
			cout<<"Number of times batsman remain not out: "<<b_notout<<endl;
			cout<<"Best persformance of Batsman: "<<b_performance<<endl;
	        b_run1=float(b_run);
			average=b_run1/(m_num-b_notout);
			cout<<"\nBatsman's Average is: "<<average<<endl;
		}
};
int main()
{
	batsman obj;
	obj.info();
	obj.getbats();
	obj.showinfo();
	obj.setbats();
	return 0;
}
