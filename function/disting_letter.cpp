#include<iostream>
#include<vector>
using namespace std;

int getDistingChFreq(string& s)
{
    int n=s.size();
    int count=0,base_index=0;
    vector<int>frequncy(26,0);

    for(int i=0;i<n;i++)
    {
        base_index=s[i]-'a';
        frequncy[base_index]++;
    }

    for(int i=0;i<26;i++)
    {
        if(frequncy[i]==1)
        {
            count++;
        }

    }

    return count;
}

int main()
{
    string s;
    cout<<"Enter your string (without Spaces ) : \n" ;
    cin>>s;

    cout<<getDistingChFreq(s);
}