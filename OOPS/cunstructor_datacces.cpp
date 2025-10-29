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
        name = " Nayan ";
        acc_number = 5734;
        balance = 2565;
    }

    // Parametrized cunstructor
    customer(string a , int b ,int c)
    {   
        name =a;
        acc_number = b;
        balance = c;

    }

    void display()
    {
        cout<<name<<' '<<acc_number<<' '<<balance<<' '<<endl;
    }

};

int main()
{
    customer S1,S2;
    customer S3; 
    S1.display();
    S2.display();
    // S3.display("nyn",2345,8999);
    
}