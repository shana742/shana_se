/*
Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */
#include<iostream>
using namespace std;

class bank_account
{
    int acc_num, balance=0, withdraw;
    string name, acc_type;

    public:
    void getdata()
    {
        cout << "\nEnter Name of the depositor: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> acc_num;
        cout << "Enter Type of Account: ";
        cin >> acc_type;
        cout << "Enter Balance amount in the account: ";
        cin >> balance;
    }

    void putdata()
    {
        cout << "\nName of the depositor: " << name;
        cout << "\nAccount Number: " << acc_num;
        cout << "\nType of Account: " << acc_type;
        cout << "\nBalance amount in the account: " << balance;
    }

    void getwithdrawal()
    {
        cout << "\nEnter Amonut to withdraw: ";
        cin >> withdraw;
    }

    void putwithdrawal()
    {
        balance = balance - withdraw;
        cout << "\nName: " << name;
        cout << "\nYour Balance After withdraw: " << balance;
    }   
};

int main()
{
    bank_account obj;
    obj.getdata();
    obj.putdata();
    obj.getwithdrawal();
    obj.putwithdrawal();
}
