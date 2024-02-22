#include<iostrem>
using namespace std;
int main()
{
	
	enum gender {male,female};
	gender Gender = male;
	
switch (Gender)
{
	case male:
	cout<< "gender is male";
	break;
	case female:
	cout<< "gender is female";
	break;
	defualt:
	cout<< "other gender";
	break;
}
}


