#include<iostream>
#include<vector>
using namespace std;

char distingChar(string& s, int k)
{
    int n=s.size();
    int base=0;
    vector<int>freq(26);

    for(int i=0;i<n;i++)
    {
        base=s[i]-'a';
        freq[base]++;
    }

    for(int i=0;i<n;i++)
    {
        base=s[i]-'a';
        if(freq[base]==1)
        {
            while(k==0)
            {
                return s[i];
                k--;
            }
            
        }

    }
    return '\0';
}

int main()
{
    string s;
    cout<<"Enter your string : \n";
    cin>>s;

    int k;
    cout<<"Enter  the disting size : ";
    cin>>k;

    cout<<distingChar(s,k);
}