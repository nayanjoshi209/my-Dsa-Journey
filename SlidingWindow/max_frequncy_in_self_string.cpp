#include<iostream>
#include<vector>
using namespace std;

void maxFreq(string& s)
{
    int n=s.size(),index;
    
    vector<int>frequency(26,0);

    // int m=frequency.size();

    for(int i=0;i<n;i++)
    {

        index=(s[i]-'a');
       
        frequency[index]++;
    }

    for(int i=0;i<26;i++)
    {
        char ch=i+'a';
        cout<<ch<<" --- "<<frequency[i]<<endl;
        // cout<<char (i+'a')<<" --- "<<frequency[i]<<endl; both works same

    }
    
}

int main()
{
    string s;
    cout<<"Enter the string : \n";
    cin>>s;

    // int k;
    // cout<<"Enter the size of window : ";
    // cin>>k;

    maxFreq(s);
}