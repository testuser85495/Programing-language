#include<iostream>
using namespace std;

class A{
	public:
int x;	
	A()
	{
		cout<<"hii"<<endl;
	}
	A(int a)
	{
		x = a;
		cout<<a<<endl;
	}
	A(A & obj1)
	{
		cout<<"hello"<<obj1.x;
	}
};

int main()
{
	A obj;
	A obj1(5);
	A obj2(obj1);
}





