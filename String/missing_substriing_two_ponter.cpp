#include<iostream>
using namespace std;

void missingChar(string& s,string& t)
{
    int n=s.size();
    int m=t.size();

    int start=0;
    int start1=0;

    while(start<m)
    {
        if(s[start]==t[start1])
        {  
            start1++;
        }
        start++; 
    }
    cout<< t[start1];
}
int main()    
{
    string s;
    cout<<"Enter the first string ( without sapces ) : \n";
    cin>>s;

    string t;
    cout<<"Enter the second string ( without spaces ) : \n";
    cin>>t;

    missingChar(s,t);
}