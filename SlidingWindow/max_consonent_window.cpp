#include<iostream>
using namespace std;

bool isConsonent(char ch)
{
    return ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!=' ';
}

int consenantCount(string& s, int k)
{
    int start=0,end=0;
    int totalCon=0,maxCon=0;
    int n,count=0;
    n=s.size();

    while(end<n)
    {
        if(isConsonent(s[end]))
        {
            count++;
        }
        if(end-start+1==k)
        {
            maxCon=max(maxCon,count);
            
            if(isConsonent(s[start]))
            {
                count--;
            }
            start++;
        }
        end++;
    }
    return maxCon;
}

int main()
{
    string s;
    int k;
    char ch;
    cout<<"Enter your string : \n";
    getline(cin , s);
    cout<<"Enter the value of k WINDOWSIZE : ";
    cin>>k;

    isConsonent(ch);
    cout<<consenantCount(s,k);
}

