//operator overloading

#include<iostream>
using namespace std;

class xyz{
	public:
		int a;
		xyz(int c)
		{
			a = c;
		}
//		operator overloading
		int operator + (xyz obj)
		{
			return a+obj.a;
		}
};
int main()
{
	xyz obj(5);
	xyz obj1(5);
	cout<<obj+obj1;
	return 0;
}
