#include<iostream>
using namespace std;

int twoMul(int& a,int& b) // Pass by refrences
{
    return a*b;
}

int main()
{ 
    int m,n;    
    cout<<"Enter the value of M and N : ";
    cin>>m>>n;
    
    cout<<twoMul(m,n);

    return 0;
}