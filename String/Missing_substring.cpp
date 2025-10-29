#include<iostream>
#include<vector>

using namespace std;

char missingChar(string& s, string& t)
{
    int n=s.size();
    int m=t.size();
    int baseIndex=0;
    vector<int>frequency(26,0);

    for(int i=0;i<n;i++)
    {
        baseIndex=s[i]-'a';
        frequency[baseIndex]++;

    }    
        for(int i=0;i<m;i++)
    {
        if(frequency[baseIndex]==0)
        baseIndex++;
        return t[baseIndex];
    }

    return -1;

}

int main()
{
    string s;
    cout<<"Enter the first sentence (without Spaces) : \n";
    cin>>s;

    string t;
    cout<<"Enter the second sentence (without Spaces) : \n";
    cin>>t;

    cout<<missingChar(s,t);
}