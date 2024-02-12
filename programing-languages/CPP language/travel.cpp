/*-----------Welcome to Travel Agency-------------
	
	Popular destinations :
	
	1. Ahmedabad
	2. Surat
	..
	..
	10. Gnadhinagar

	Do You want To SignUp ? ['y/n'] : 
	=============================
	if n
		Thank You

	==============================
	if y
	follow the below process
	--------------------------------------------------

	Welcome to User Signup ----------

	Enter name : 
	Enter age : 
	Enter e-mail : 
	Enter contact : 
	Enter password : 
	Enter Confirm Password :

	if cpswd & pswd does not matched
	Error : password and confirm password does not matched !!
		-repeat the process of registration

	if cpswd & pswd same
	Registration Sucessful

	-----------------------------------------------------------

	Welcome to User Login --------------------------

	email/username:
	pswd : 

	if username & pswd both correct :
	Access on Account Successful

	if username & pswd both Incorrect :	
	Access Denied!!!!

====================================================================================== 


*/

#include<iostream>
#include<string>
using namespace std;
class Travel_Agency{
	public:
		string name;
		string email;
		int age;
		int contact;
		int password;
		int cpassword;
		int choice;
		char ch;

	void Registration()
	{
		
		cout<<"=================POPULAR DESTINATION================"<<endl;
		cout<<"1). Ahmedabad: "<<endl;
		cout<<"2). Surat: "<<endl;
		cout<<"3). Gnadhinagar: "<<endl;
		choice:
		cout<<"Enter your destinations:";
		cin>>choice;
		if(choice <= 3 && choice > 0)
		{
			cout<<"Do You want To SignUp ? ['y/n'] :";
			cin>>ch;
		}
		else
		{
			cout<<"Invalid Choice!!!"<<endl;
			goto choice;
		}
		
			if(ch == 'y')
			{
				cout<<"============WELCOME TO SIGNUP============"<<endl;
				cout<<"Enter Name :";
				cin>>name;
				cout<<"Enter Age: ";
				cin>>age;
				cout<<"Enter Email: ";
				cin>>email;
				cout<<"Enter Contact: ";
				cin>>contact;
				password:
				cout<<"Enter Password: ";
				cin>>password;
				cout<<"Enter Confirm Password: ";
				cin>>cpassword;
				
				if(password == cpassword)
				{
//					use for text color(\033[32m)
					cout<<"\033[32m"<<"Registration Sucessful"<<endl;
					cout<< "\033[0m";
				}
				else
				{
//					use for text color(\033[32m)
					cout<< "\033[31m"<<"Error : password and confirm password does't matched !!"<<endl;
					cout<< "\033[0m";
					goto password;
					
				}
			}
			else
			{
				cout<<"Thank You"<<endl;
				exit(0);
			}
	}
	void Login()
	{
		string lname;
		string lemail;
		int lpassword;
		cout<<"====================WELCOME TO USER LOGIN======================="<<endl;
		cout<<"Enter username:";
		cin>>lname;
		cout<<"Enter email:";
		cin>>lemail ;
		cout<<"Enter password:";
		cin>>lpassword;
		
		if(name == lname && email == lemail && password == lpassword)
		{
//			use for text color(\033[32m)
			cout<<"\033[32m"<<"Access on Account Successful";
			cout<< "\033[0m";
		}
		else
		{ 
//			use for text color(\033[32m)
			cout<<"\033[31m"<<"Access Denied!!!!";
			cout<< "\033[0m";
		}
	}		
};
int main()
{
	Travel_Agency obj;
	
	obj.Registration();

	obj.Login();
	
	return 0;
}

