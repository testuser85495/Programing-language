#include<iostream>
using namespace std;

class A{
	private:
		int a,b;
	public:
		A(int ac,int b)
		{
			this->a=ac;
			this->b=b;
		}
		
		void one()
		{
			cout<<a<<" "<<b;
		}
		
		
};
int main()
{
	A obj(10,15);
	obj.one();
}
