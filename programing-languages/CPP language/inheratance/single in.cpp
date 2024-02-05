#include<iostream>
#include<string>
using namespace std;

class A{
	public:
		string fname = "xyz";
};
class B:public A{
	public:
		string lname = "arkan";
};

int main()
{
	B obj;
	cout<<obj.fname<<" "<<obj.lname;
	return 0;
}


