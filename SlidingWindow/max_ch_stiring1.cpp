                    // o(n) time complexity of string equal to target character
#include<iostream>
using namespace std;

int maxFrequency(string& s,int k, char target)
{
    int start=0,end=0;
    int getMaxFreq=0;
    int index=0,n=s.size();

    while(end<n)
    {
        if(s[end]==target)   
            {
                index++;
            }

        if(end-start+1==k)
        {  
            getMaxFreq=max(getMaxFreq,index);

            if(s[start]==target)   
            {
                index--;
            }

            start++;  
        }

        end++;
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