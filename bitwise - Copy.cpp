#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=9;
  int bitwise_and = a&b;
  int bitwise_or = a|b;
  int bitwise_xor = a^b;
  int bitwise_not = a!=b;
  int bitwise_shiftleft = a<<1;
  int bitwise_shiftright = a>>3;
  
  cout<< "\nand = "<<bitwise_and;
  cout<< "\nor = "<<bitwise_or;
  cout<< "\nxor = "<<bitwise_xor;
  cout<< "\nnot = "<<bitwise_not;
  cout<< "\nshift left  = "<<bitwise_shiftleft;
  cout<< "\nshift right = "<<bitwise_shiftright;
   
   return 0;
}
