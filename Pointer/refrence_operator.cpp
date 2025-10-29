#include<iostream>
using namespace std;
int main()
{
    int num=1;
    int &add=num;
    add++;
    num++;
    cout<<add<<" "<<num;
}