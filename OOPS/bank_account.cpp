#include<iostream>
using namespace std;

class Account
{
    int account_number;
    string name;
    int balance;

    public:

    // input valus
    void inputData()
    {
        cout<<"Enter account holder name : \n";
        getline(cin,name);

        cout<<"Enter your accont number : \n";
        cin>>account_number;

        cout<<"Enter your current Balance avaliabe in your account : \n";
        cin>>balance;
    }

    //Shown Data
    void Display()
    {
        cout<<"\naccount holder name : "<<name<<endl;

        cout<<"your accont number : "<<account_number<<endl;
        
        cout<<"your current Balance avaliabe in your account : "<<balance<<endl<<endl;
    }

    // Deposite money
    void depostieMoney()
    {
        int value;
        cout<<"\nEnter the Balance you have Deposited (Cradit) : ";
        cin>>value;
        balance+=value;

        cout<<"\nRemaning purse Balance : "<<balance;
    }

    // Windraw Money
    void withdrawMoney()
    {
        int value;
        cout<<"\nEnter the Balance you have withdraw (Debit) : ";
        cin>>value;
        balance-=value;

        cout<<"\nRemaning purse Balance : "<<balance;
    }

};

int main()
{
    Account Acc;
    Acc.inputData();
    Acc.Display();

    int n;
    cout<<" 1. - press 1 - To deposite balance in your account : \n 2. - press 2 - To withdraw balance in your account : \n 3. - press any other button to exit to here : " ;
    cin>>n;

    if(n==1)
    {
        Acc.depostieMoney();
    }

    else if(n==2)
    {
        Acc.withdrawMoney();
    }

    else
    return 0;
}