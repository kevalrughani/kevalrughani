#include<iostream>
using namespace std;
void increment(int &x)
{
	x++;
}
int main()
{
	int num=5;
	increment (num);
	cout<<"modified value"<<num <<endl;
	return 0;
}
