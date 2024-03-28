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
	    static int getTotalStudents();
};
    int Student::totalStudents= 0;
    
    void Student::displayInfo()
    
{

	cout<<"rollnumber:"<<rollnumber<<endl;
	cout<<"name:"<<name<<endl;	
	cout<<"marks:"<<marks<<endl;
}

int Student:: getTotalStudents()
{
	return totalStudents;
}
int main()
{
	Student student1,student2;
	
	student1.rollnumber=105;
	student1.name="keval";
	student1.marks=70.55;
	
	student2.rollnumber=106;
	student2.name="om";
	student2.marks=85.55;
	
	 cout<<"Student 1 Information:"<<endl;
	 student1.displayInfo();
	 
	 cout<<"\nStudent 2 Information:"<<endl;
	 student2.displayInfo();
	 
	 cout<<"\nTotal Students:"<<Student::getTotalStudents()<<endl;
	 
	 return 0;
	 
}
