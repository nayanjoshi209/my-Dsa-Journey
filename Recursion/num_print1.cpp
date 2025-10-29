#include<iostream>
using namespace std;

void printVal(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }

    printVal(n-1);
    cout<<n<<endl;  
}

int main()
{
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
        
    printVal(n);
}