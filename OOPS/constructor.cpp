#include<iostream>
using namespace std;

class customer
{
    string name;
    int acc_number;
    int balance;

    public : 
    //Default constructor
    customer()  
    {
        cout<<"Constructor Called : ";
    }

};

int main()
{
    customer S1; 
}