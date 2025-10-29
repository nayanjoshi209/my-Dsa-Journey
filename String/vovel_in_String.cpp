#include<iostream>
using namespace std;

int vovelCount(string& s,int& n)
{
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    cout<<"Your string written here : \n";
    getline(cin,s);

    int n=s.size();

    cout<<vovelCount(s,n);
}