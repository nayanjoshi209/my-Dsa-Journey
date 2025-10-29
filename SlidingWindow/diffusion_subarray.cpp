#include<iostream>
#include<vector>
using namespace std;

int maxSubArraay(string& s,int k)
{
    int n=s.size();
    int start=0,end=0;
    int maxVar=0,index=0;
    int Count=0;

    vector<int>frequency(26,0);

    while(end<n)
    {
        index=(s[end]-'a');

        frequency[index]++;
        Count++;

        if(s[end]!=s[end+1])
        {
            Count++;
        }

        if(end-start+1==k)
        {

            maxVar=max(maxVar,Count);

            index=(s[start]-'a');

            frequency[index]--;

             if(s[start]!=s[start+1])
            {
            Count--;
            }

            start++;
        }
        end++;
    }

    return maxVar;

}

int main()
{
    string s;
    cout<<"Enter your string : \n";
    cin>>s;

    int k;
    cout<<"Enter the window Size (k) ";
    cin>>k;

    cout<<maxSubArraay(s,k);

}