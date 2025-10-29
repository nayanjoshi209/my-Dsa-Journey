#include<iostream>
using namespace std;

void fn(int n)
{
    //  Base Condition 
    if(n==2)
    {
        cout<<n<<endl;
        return ;
    }
    cout<<n<<endl;
    fn(n-2);
}

int main()
{
    int n=10;

    fn(n);
}