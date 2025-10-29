// Copy string with same spaces
#include<iostream>
#include<string>
using namespace std;

string sameString(string& s )
{
    int  n= s.size();
    string ans;

    for(int i=0;i<n;i++)
    {
        ans.push_back(s[i]);
    }
    return ans;
}
int main()
{
    string s;
    cout<<"Enter your sentance  : ";
    getline(cin,s);

    cout<<sameString(s);
    return 0;
}