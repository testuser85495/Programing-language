#include<iostream>
#include<string>
using namespace std;

class A{
	public:
		string fname = "xyz";
		void one()
		{
			cout<<"hello 1 ";
		}
};
class B{
	public:
		string lname = "arkan";
		void two()
		{
			cout<<"hello 2 ";
		}
};

class C:public B,public A{
	int num;
	public:
		string mmane = "pqr";
		void three()
		{
			cout<<"hello 3 ";
			cin>>num;
			cout<<num;
		}
};

int main()
{
	C obj;
	obj.one(); 
	obj.two(); 
	obj.three( ); 
	cout<<obj.fname<<" "<<obj.lname<<" "<<obj.mmane ;
	return 0;
}


