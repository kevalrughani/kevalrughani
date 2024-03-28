#include<iostream>
using namespace std;
class student
{
   public:
   int rollnumber;
   string name;
   float marks;
   
   void displayInfo()
   {
   	cout<<"rollnumber"<<rollnumber<<endl;
   	cout<<"name"<<name<<endl;
   	cout<<"marks"<<marks<<endl;
   }	
};

int main()
{
	student student1,student2,student3;
	 student1.rollnumber=101;
	 student1.name="keval";
	 student1.marks=60.45;
	 
	 cout<<"student 1 Informatition:"<<endl;
	 student1.displayInfo();
	 student3.rollnumber=102;
	 student3.name="keval";
	 student3.marks=90.90;
	 cout<<"student 3 Informatition:"<<endl;
	 student3.displayInfo();
	 
	 class Student
	 {
	 	private:
	 		int rollnumber;
	 		public:
	 			string name;
	 			float marks;
	 			void setrollnumber(int roll)
	 			{
	 				rollnumber=roll;
			    }
	 };
	
	
	 return 0;
}
