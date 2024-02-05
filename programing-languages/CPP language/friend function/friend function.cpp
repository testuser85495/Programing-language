// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class A{
	private:
		int length =10,width=5;
		friend void one(A);
		
};
void one(A obj)
{
	cout<<obj.length*obj.width;
}

int main()
{
	A obj;
	one (obj);
	return 0;
}
