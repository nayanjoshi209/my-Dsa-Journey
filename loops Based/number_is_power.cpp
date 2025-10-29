#include<iostream>
using namespace std;
int main()
{
    int number;
    int power;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<"Enter its Power : ";
    cin>>power;
    int n=number;

    for(int i=1;i<power;i++)
    {
        number=number*n;
    }
    cout<<number;
    return 0;
}