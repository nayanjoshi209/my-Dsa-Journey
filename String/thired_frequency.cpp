#include<iostream>
#include<vector>
using namespace std;

char thirdIdxChar(string& s)
{
    int n=s.size();
    char base=0; 
    int count=0;
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
            count++;
            if(count==3)
            return s[i];
        }
    }

    return '\0';

}

int main()
{
    string s;
    cout<<"Enter the string : \n";
    cin>>s;

    cout<<thirdIdxChar(s);
}