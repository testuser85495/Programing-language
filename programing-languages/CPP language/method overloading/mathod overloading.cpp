//method overloading

#include<iostream>
#include<string>
using namespace std;
class xyz{
	public:
		//method overloadig
		int abc(int x,int y,int z = 0)
		{
			return x+y+z;
		}
};
int main()
{
	xyz obj;
	cout<<obj.abc(1,2)<<endl;
	cout<<obj.abc(1,2,4);
	
	return 0;
}
