/*Define a class to represent lecture details. Include the following members and the program should handle
at least details of 5 lecturer.   Data members: Name of the lecturer Name of the subject Name of course Number of
lecturers Data functions: To assign initial values to add a lecture detail to display name and lecture details.*/
#include<iostream>
using namespace std;
class lacture{
	public:
		string cour,subject,name;
		int num;
		void course()
		{		
		cout<<"Name of the Course: ";
		cin>>cour;
		cout<<"Number of the Lectures: ";
		cin>>num;
	    }
	    void lec()
		{		
		cout<<"Name of the Lecturer: ";
		cin>>name;
		cout<<"Name of the subject: ";
		cin>>subject;
	    }
		
	    void display()
	    {
	    	cout<<"Name of Course: "<<cour<<"\nNumber of Lectures are: "<<num<<endl;
		}
		void display1()
		{
			cout<<"\nLacturer's Name: "<<name<<"\nSubject:  "<<subject<<endl;
		}
};
int main()
{
	lacture obj,l1,l2,l3,l4,l5;
	obj.course();
	l1.lec();
	l2.lec();
	l3.lec();
	l4.lec();
	l5.lec();
	obj.display();
	l1.display1();
	l2.display1();
	l3.display1();
	l4.display1();
	l5.display1();
	return 0;
} 
