#include<iostream>
using namespace std;
void increment(int x)
{
	x++;
}
int main()
{
	int num=6;
	increment (num);
	cout<<"original value"<<num <<endl;
	return 0;
}
