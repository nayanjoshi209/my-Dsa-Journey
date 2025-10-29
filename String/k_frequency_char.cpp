#include<iostream>
#include<vector>
using namespace std;

char getKthChar(string& s,int k)
{
    int n=s.size();
    int base=0;
    int count=0;
    vector<int>frequency(26);

    for(int i=0;i<n;i++)
    {
        base=s[i]-'a';
        frequency[base]++;
    }

    for(int i=0;i<n;i++)
    {
        base=s[i]-'a';

        if(frequency[base]==1)
        {
            count++;
            if(count==k)
            {
                return s[i];
            }
        }
    }
    return '\0';
}

int main()
{
    string s;
    cout<<"Enter your sentene (without spaces ) : \n";
    cin>>s;

    int k;
    cout<<"Enter the index of unique char : ";
    cin>>k;

    cout<<getKthChar(s,k);
}