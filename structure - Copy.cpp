#include<iostream>
#include<string.h>
using namespace std;
struct Student
{
	string name;
    int rollNumber;
	float SPI;	
};
int main()
{
    Student student1;
	student1.name = "KEVAL";
	student1.rollNumber = 31;
	student1.SPI = 8.90;

	
	cout<<"name:" <<student1.name <<endl;
	cout<<"rollNumber:" <<student1.rollNumber <<endl;
	cout<<"SPI:" <<student1.SPI <<endl;
	
	return 0;
}
