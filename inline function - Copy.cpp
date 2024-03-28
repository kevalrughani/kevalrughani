#include<iostream>
using namespace std;
const float pie=3.14;
inline float area(float r)
{
return (pie*r*r);
}
int main()
{
float radius;
cout<<"Enter radius:";
cin>>radius;
cout<<"Area="<<area(radius)<<endl;
}
