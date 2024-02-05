#include<iostream>
#include<string>

using namespace std;

class A{
	public:
		void one()
		{
			cout<<"this is a\n";
		}
};
class B{
	public:
		void one()
		{
			cout<<"this is b\n";
		}
};
class C{
	public:
		void one()
		{
			cout<<"this is c\n";
		}
};

int main()
{
	A obj;
	B obj1;
	C obj2;
	
	obj.one();
	obj1.one();
	obj2.one();
	
	return 0;
}
