//aggrigation comman vastu maltiple use kr va meta



#include<iostream>
#include <string>

using namespace std;
class Address{
	public:
		string state;
		string city;
		int pin;
	Address(string state,string city,int pin)
	{
		this->city = city;
		this->state = state;
		this->pin=pin;
	}
		
};
class employee{
	public:
		int id_name ;
		string emp_name ;
		Address *address;
		employee(int id_name,string emp_name,Address *address)
		{
			this -> id_name = id_name;
			this -> emp_name = emp_name;
			this -> address = address;
		}
			void displayEmp()
			{
				cout<<"Emp details ---------------\n";
				cout<<"Emp id"<<id_name<<endl;
				cout<<"Emp Name"<<emp_name<<endl;
				cout<<"city"<<address ->city<<endl;
				cout<<"state"<<address->state<<endl;
				cout<<"pin"<<address->pin<<endl; 
			}
		
};
class student{
	public:
		int id_std = 011;
		string std_name = "abc";
		Address *address;
		student(int id_std,string std_name,Address *address)
		{
			this -> id_std = id_std;
			this -> std_name = std_name;
			this -> address = address;

}			void displaystd()
			{
				cout<<"Emp details ---------------\n";
				cout<<"Emp id"<<id_std<<endl;
				cout<<"Emp Name"<<std_name<<endl;
				cout<<"city"<<address ->city<<endl;
				cout<<"state"<<address->state<<endl;
				cout<<"pin"<<address->pin<<endl; 
			}
		
};

int main()
{
	Address obj("gujarat","ahamdabad",00111);
	
	employee obj1	(1,"xyz",&obj);
	obj1.displayEmp();
	
	student obj2	(2,"abc",&obj);
	obj2.displaystd();
	
	
	return 0;
}
