//abstraction


#include<iostream>
using namespace std;

class A{
	public:
	virtual void one()=0;
	
};
class B{
	public:
	void one()
	{
		cout <<"B";
	}
};
class C: public A{
	public:
	void one()
	{
		cout <<"C";
	}
};

int main()
{
	B obj;
	C obj1;
	
	obj.one();
	obj1.one();
	
	
	
	
	return 0;
}
