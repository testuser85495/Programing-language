#include<iostream>
using namespace std;

class A{
	private:
		int a=10;
	public:
		int b=20;
	protected:
		int c=30;
	public:
	void xyz()
	{
		cout<<"a"<<a;
		cout<<"b"<<b;
		cout<<"c"<<c;
		
	}	
};

class B:public A{
	public:
	void abc()
	{
	cout<<"b"<<b;
	cout<<"c"<<c;
	}
};

int main()
{
	B obj;
	obj.xyz();
	obj.abc();
}
