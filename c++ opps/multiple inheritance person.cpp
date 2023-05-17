/*Create a class person having members name and age. Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. 
Write also Main function (MultipleInheritance)*/
#include<iostream>
using namespace std;

class student{
		public:
			int percentage;
			void s_percentage()
			{
			cout<<"Enter the percentage: ";
			cin>>percentage;
		    }
		    void s_info()
		    {
		    	cout<<"Student's Percentage is: "<<percentage<<endl;
			}
};
class teacher{
	public:
		int salary;
		void t_salary()
		{
			cout<<"Enter the salary: ";
			cin>>salary;
		}
		void t_sal()
		{
			cout<<"Teacher's salary is: "<<salary<<endl;
		}
};
class person:public student,public teacher{
	public:
		string name;
		int age;
		void p_info()
		{
		cout<<"\nEnter your name: ";
		cin>>name;
		cout<<"Enter your age: ";
		cin>>age;
		}
		void p_in()
		{
			cout<<"\nYour Name is: "<<name<<"\nYour age is: "<<age<<endl;
		}
};

int main()
{
	person obj;
	obj.p_info();
	obj.s_percentage();
	obj.p_in();
	obj.s_info();
	obj.p_info();
	obj.t_salary();
	obj.p_in();
	obj.t_sal();
	return 0;
}
