        // time complexity is 0(n*n) of string equal to target character
#include<iostream>
using namespace std;

int maxTarget(string& s,int k, char target)
{
    int start=0,end=0;
    int getMaxFreq=0;
    int index=0,n=s.size();

    while(end<n)
    {
        if(end-start+1==k)
        {
            for(int i=start;i<=end;i++)
            {
                if(s[i]==target)
                {
                    index++;
                }
            }

            getMaxFreq=max(getMaxFreq,index);
            start++;
            index=0;
        }
        end++;
    }
    return getMaxFreq;
}

int main()
{
    string s;
    cout<<"Enter string here : \n ";
    getline(cin,s);

    int k;
    cout<<"Enter the window size (k) : ";
    cin>>k;

    char target;
    cout<<"Enter the character also present in the string : ";
    cin>>target;

    cout<<maxTarget(s,k,target);
}