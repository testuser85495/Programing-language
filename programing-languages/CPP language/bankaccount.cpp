/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include <iostream>
using namespace std;

class BankAccount 
{
    private:
        int accountNumber;
        double balance;
    public:
        BankAccount(int accNum, double Bal) 
        {
            accountNumber = accNum;
            balance = Bal;
        }
        void deposit(double amount) 
        {
            balance += amount;
            cout<<"Deposit: "<<amount<<endl;
            cout<<"Current balance: "<<balance<<endl;
            
        }
        void withdraw(double amount) 
        {
            if (balance >= amount) 
            {
                balance -= amount;
                cout<<"Withdrawal successful: "<<amount<<endl;
                cout<<"Current balance: "<<balance<<endl;
            } 
            else 
            {
                cout<<"Insufficient balance. Cannot withdraw.: "<<balance<<endl;
            }
        }
};

int main() 
{
    int accountNumber = 111;
    double Balance  = 1000, amount;
    cout << "Account number: "<<accountNumber<<endl;
    cout << "Balance: "<<Balance<<endl;
    BankAccount Account(accountNumber, Balance);
    int choice;
    
        cout << "Enter 1 to deposit, 2 to withdraw, or 0 to exit: ";
        cin >> choice;
        if (choice == 0) 
        {
            return 0;
        } 
        else if (choice == 1) 
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            Account.deposit(amount);
        } 
        else if (choice == 2) 
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            Account.withdraw(amount);
        } 
        else 
        {
            cout << "Invalid choice." << endl;
        }
    
    return 0;
}

