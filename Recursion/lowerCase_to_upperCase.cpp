#include<iostream>
using namespace std;

void upperToLower(string& s , int index)
{
    //Base Condition
    if(index==-1)    
    return;

    s[index] = 'A' + s[index] - 'a';

    upperToLower(s,index-1);
}

int main()
{
    string s;
    cout<<"Enter your string  : \n ";
    getline(cin , s);

    int n=s.size();

    upperToLower(s,n-1);

    cout<<s;
}