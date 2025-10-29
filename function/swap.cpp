#include<iostream>
using namespace std;

void swap(int &a,int &b)   // pass by refrence
{
    int c;
    c=a;
    a=b;
    b=c;
};

int main()
{
    int m,n;
    cout<<"Enter the number of  A and b : ";
    cin>>m>>n;
    swap(m,n);
    cout<<m<<" "<<n;
}