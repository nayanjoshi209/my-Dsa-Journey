#include<iostream>
using namespace std;

int getSameChFreq(string& s)
{
    int n=s.size();
    int count=1,ans=1;

    for(int i=0;i<n;i++)
    {
        count=1;
        while( i+1<n && s[i]==s[i+1] )
        {
            count++;
            ans=max(ans,count);
            i++;
        }
    }
    return ans;
}
int main()
{
    string s;
    cout<<"Enter your sentance : \n";
    cin>>s;

    cout<<getSameChFreq(s);
}