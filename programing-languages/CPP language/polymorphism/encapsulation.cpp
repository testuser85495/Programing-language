#include<iostream>
#include<string>
using namespace std;
class A{
	private:
		int data;
	public:
		void setdata(int da)
		{
			data = da;
		}
		int getdata()
		{
			return data;
		}
};
int main()
{
	A obj;
	obj.setdata(2000);
	cout<<"your data value is:"<<obj.getdata()<<endl;
//	cin>>obj.setdata(da);
	return 0;
}
