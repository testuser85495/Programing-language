//hybrid

#include<iostream>
using namespace std;

class A{
	public:
		A(){
			cout<<"this is a\n";
		}
	
	
};
class B : public A{
	public:
		B()
		{
			cout<<"this is b\n";
		}
	
};
class C{
	public:
		C()
		{
			cout<<"this is c\n";
		}
	
};
class D: public B,public C {
	public:
		D()
		{
			cout<<"this is d\n";
		}
	
};

int main()
{
	D obj;
	return 0;
}
