#include<iostream>
using namespace std;
int MinLength (const string& s)
{
    int n=s.size();
    int start=0,end=0;
    int minLength=INT_MAX;

    while(end<n)
    {
        if(s[end]==' ')
        {
            minLength=min(minLength,end-start);
            start=end+1;
        }
        end++;
    }
    minLength=min(minLength,end-start);
    return minLength;
}
int main()
{
    string s;
    cout<<"Enter your Sentance  : ";
    getline(cin,s);

    cout<<MinLength(s);

    return 0;
}