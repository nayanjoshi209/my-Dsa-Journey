#include<iostream>
using namespace std;

int pow(int n , int power)

{
    // Base caske
    if(power==0)
    return 1;

    return n*pow(n,power-1);
}

int main()
{
    int n,power;
    cout<<"Enter the number of n : ";
    cin>>n;

    cout<<"Enter the number of power : ";
    cin>>power;

    cout<<pow(n,power);
}