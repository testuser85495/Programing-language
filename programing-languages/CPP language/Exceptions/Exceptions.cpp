//Accesption handler
//use to handle run time errors

#include<iostream>
#include<string>
using namespace std;

	float div(float a,float b)
	{
		if(b == 0)
		{
			throw "can't div by 0";
		}
		else
		{
			return a/b;
		}
	}
	
	
int main()
{
	float num1,num2;
	
	cout<<"Enter 2 number:";
	cin>>num1>>num2;
	
	try{
		cout<<div(num1,num2);
		
	}
	catch(const char*c)
	{
		cout<<"num2 cnt div by 0"<<c<<endl;
	}
	return 0;
}

