//Event menagement

#include<iostream>
#include<string>
#include <cmath>

using namespace std;

class EventMenagement
{
	private:
		string name;
		string eventname;
		int NumberOfServer;
		int guest;
		int min;
		double TotalFoodCost;
		double AverageCost;
		double TotalCost;
		double DepostAmount;
		double CostForOneServer;
		
	public:	
		void UserInput()
		{
			cout<<"================Event Menagement System=================="<<endl;
			cout<<endl;
			cout<<"Enter The Name Of Event:";
			getline(cin, eventname);
			
			cout<<"Enter The First and Last name:";
			getline(cin, name);
			
			cout<<"Enter number of guest:";
			cin>>guest;
			
			cout<<"Enter The Number Of Minutes in the Event:";
			cin>>min;
			cout<<endl;
		}
		
		void CostOfEvent()
		{
			double cost1,cost2;
			
			cout<<"===========Event Estimate for :"<<name<<"================"<<endl;
			cout<<endl;
			
			NumberOfServer = ceil(guest / 20.0);
			cost1 = (min/60)*18.50;
			cost2 = (min%60)*.40;
			CostForOneServer = cost1+cost2;
			TotalFoodCost = guest * 20.70;
			AverageCost = TotalFoodCost/guest;
			TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServer);
			DepostAmount = TotalCost * .25;
		}
		
		void display()
		{
			cout<<"Number Of Server: "<<NumberOfServer<<endl;
			cout<<"The Cost for Servers: "<<CostForOneServer<<endl;
			cout<<"The Cost For Food Is: "<<TotalFoodCost<<endl;
			cout<<"Average Cost per Person:"<<AverageCost<<endl;
			cout<<endl;
			cout<<"Total Cost Is: "<<TotalCost<<endl;
			cout<<"Please deposite a 25% deposite to reserve the event"<<endl;
			cout<<"The Deposit needed is: "<<DepostAmount;
		}
		
};

int main()
{
	EventMenagement obj;
	
	obj.UserInput();
	obj.CostOfEvent();
	obj.display();
	return 0;
}


