#include<iostream>
using namespace std;

void inc(int &n)  // void not get return 
{
    n++;        //pass by refrence , value  get optisimised
}

int main()
{
    int a;
    cout<<"Enter the value of A ";
    cin>>a; 
    inc(a);
    cout<<a;
}

// #include<iostream>
// using namespace std;

// void inc(int n)  // void not get return 
// {
//     n++;        //pass by value , value  not optisimised
// }

// int main()
// {
//     int a;
//     cout<<"Enter the value of A ";
//     cin>>a; 
//     inc(a);
//     cout<<a;
// }