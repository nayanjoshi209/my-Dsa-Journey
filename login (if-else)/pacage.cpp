#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter your packege :: Value in lakh : ";
    cin>>amount;

    if(amount>=10)
    cout<<"Accepted ";

    else
    cout<<"Rejected ";

    return 0;
}