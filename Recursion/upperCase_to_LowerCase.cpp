#include<iostream>
using namespace std;

void upperToLower(string& s , int index)
{
    //Base Condition
    if(index==-1)    
    return;

    s[index] = 'a' + s[index] - 'A';

    upperToLower(s,index-1);
}

int main()
{
    string s;
    cout<<"Enter your string  : (IN CAPITAL) \n ";
    getline(cin , s);

    int n=s.size();

    upperToLower(s,n-1);

    cout<<s;
}