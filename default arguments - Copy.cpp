#include<iostream>
using namespace std;
void greet(string name="keval",int age=16)
{
	cout<<"hello"<<name<<"age"<<age<<endl;
}
int main()
{
	greet();
	greet("nihalsinh");
	greet("raj",14);
	
	return 0;
}
