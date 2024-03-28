#include<iostream>
using namespace std;
class Student 
{
	
	public:
		int rollnumber;
		string name;
		float marks;
		static int totalStudents;
		
		Student()
		{
			totalStudents++;
		}
		void displayInfo();
};
    int Student::totalStudents=0;
    void Student::displayInfo()
    {
    	cout<<"RollNumber:" << rollnumber<<endl;
    	cout<<"name:" << name<<endl;
    	cout<<"marks:" << marks<<endl;
    	
	}
	int main()
	{
		Student student1,student2;
		student1.rollnumber=101;
	    student1.name="keval";
	 	student1.marks=60.45;
	 	
	 	student2.rollnumber=501;
	 	student2.name="Nihalsinh";
	 	student2.marks=22.05;
	 	
	 	cout<<"Student 1 Information:"<<endl;
	 	student1.displayInfo();
	 	
	 	cout<<"\nStudent 2 Information:"<<endl;
	 	student2.displayInfo();
	 	
	 	cout<<"\nTotal Students:"<< Student::totalStudents<<endl;
	 	return 0;
	}
