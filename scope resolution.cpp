#include <iostream>
using namespace std;
int a=7;
int main()
{  
  int a=5;
   
   cout<< "\nthe global variable value = "<<::a;
   cout<< " \nthe local variable value = "<<a;
    
    return 0;
}
