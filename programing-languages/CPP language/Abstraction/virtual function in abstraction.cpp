#include<iostream>

using namespace std;

class A{
	public:
		virtual void abc()=0;
		
};

class B:public A
{
	public:
		void abc()
		{
			cout <<"b";
		}
};

class C:public A
{
	public:
		void abc()
		{
			cout<<"C";
		}
};

int main()
{
	C obj;
	obj.abc();
	B obj1;
	obj1.abc();
}
