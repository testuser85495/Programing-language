/*
	Templates : it is a data type in c++
	
	templates are very simple yet very powerful tool in c++
	
	use for versetile data type to your variables 
	
	>>How to declare template variable 
	
		Syntax : template <class/typename template_variable_name>
*/

#include<iostream>
using namespace std;

//Funcitons and Template
template <class T>
T add(T a, T b)
{
	return a+b;
}

int main()
{
	cout<<"Return from funciton : "<<add<int>(12,34)<<endl;
	cout<<"Return from funciton : "<<add<float>(1.2,3.4);
	
	return 0;
}
