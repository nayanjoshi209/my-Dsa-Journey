#include<iostream>
using namespace std;

void fun0(int n)
{
    cout<<"HAPPY BIRTHDAY";
}

void fun1(int n)
{
    cout<<n<<" Days left from birthday : \n";
    fun0(n-1);
}


void fun2(int n)
{
    cout<<n<<" Days left from birthday : \n";
    fun1(n-1);
}

void fun3(int n)
{
    cout<<n<<" Days left from birthday : \n";
    fun2(n-1);
}

int main()
{
    int n=3;
    // cout<<"Enter the days left from the birthday date : ";
    // cin>>n;

    fun3(3);
    // fun2(2);
    // fun1(1);
    // fun0(0);
}