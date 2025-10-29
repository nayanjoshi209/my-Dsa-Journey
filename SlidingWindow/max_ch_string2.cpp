    // time complexity is 0(n*n) of string equal to target character
#include<iostream>
using namespace std;

int maxFrequency(string& s , int k , char target)
{
    int getMaxFreq=0;
    int index=0,n=s.size();

    for(int i=0;i<=n-k;i++)
    {
        for(int j=i;j<i+k;j++)
        {
            if(s[j]==target)
            {
                index++;
            }
        }
        getMaxFreq=max(getMaxFreq,index);
        index=0;
    }
    return getMaxFreq;
}

int main()
{
    string s;
    cout<<"Enter string here - Cantain only small aplhebet letters :  \n ";
    getline(cin,s);

    int k;
    cout<<"Enter the window size (k) : ";
    cin>>k;

    char target;
    cout<<"Enter the character also present in the string : ";
    cin>>target;

    cout<<maxFrequency(s,k,target);
}