#include<iostream>
using namespace std;

void printVal(int n,int N)
{
    if(n==N)
    {
        cout<<N<<endl;
        return;
    }

    cout<<n<<endl;
    printVal(n+1,N);
}

int main()
{
    int n;
    cout<<"Enter tte value of N : ";
    cin>>n;

    printVal(1,n);
}