#include<iostream>
using namespace std;
class Student;
void displayInfoFriend(const Student &student);
class Student
{
	public:
		int rollnumber;
		string name;
		float marks;
		
		public:
			Student(int roll, const string &nm, float mk): rollnumber (roll), name(nm),marks(mk) {}
			
			 void displayInfoFriend(const Student &student);
		
		void displayInfo()
		{
			cout<<"rollnumber:"<<rollnumber<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"marks:"<<marks<<endl;
			cout<<"-------------"<<endl;
			
		}
};
void displayInfoFriend(const Student &student)
{
	cout<<"Friend Function Information:"<<endl;
	cout<<"roll number:"<<student.rollnumber<<endl;
	cout<<"name:"<<student.name<<endl;
	cout<<"marks:"<<student.marks<<endl;
}
int main()
{
	Student myStudent(101,"keval",75.5);
	cout<<"Information using Member Function:"<<endl;
	myStudent.displayInfo();
	displayInfoFriend(myStudent);
	return 0;
	
}
