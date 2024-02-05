#include<iostream>
#include<string>
using namespace std;

class A{
	public:
//		string fname = "xyz";
		void one()
		{
			cout<<"hello 1 ";
		}
};
class B:public A{
	public:
		string lname = "arkan";
		void two()
		{
			cout<<"hello 2 ";
		}
};

class C:public A{
	int num;
	public:
		string mmane = "pqr";
		void three()
		{
			cout<<"hello 3 ";
//			cin>>num;
//			cout<<num;
		}
};

class D:public B,public C{
	public:
		string xname = "xyz";
		void four()
		{
			cout<<"hello 4 ";
		}
};

int main()
{
	D obj;
	
	obj.four();
	obj.two();
	obj.three();
	
	cout<<obj.xname<<" "<<obj.lname<<" "<<obj.mmane;
	
	
	
	
	
	
	return 0;
}


