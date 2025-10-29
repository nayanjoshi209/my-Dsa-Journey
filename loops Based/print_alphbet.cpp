#include<iostream>
using namespace std;
int main()
{
    char i;
    int n;
    int a=1;
    cout<<"Enter 1 to capital alphbet :: Enter 2 to small alphebet : ";
    cin>>n;

    if(n==a)
    for(char i='A';i<='Z';i++)
    {
        cout<<i<<"  ";
    }
    else
    for(char i='a';i<='z';i++)
    {
        cout<<i<<"  ";
    }
    return 0;
}
