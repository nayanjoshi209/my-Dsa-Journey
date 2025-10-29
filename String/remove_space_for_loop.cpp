#include<iostream>
using namespace std;

string rmvSpaces ( const string& sentence)
{
    int n=sentence.size();
    string ans;
    int start=0;

    for(int i=0;i<n;i++)
    {
        if(sentence[i]!=' ')
        {
            ans.push_back(sentence[i]);
        }
    }
    return ans;
}
int main()
{
    string sentence;
    cout<<"Enter your sentance : ";
    getline(cin,sentence);

    cout<<rmvSpaces(sentence);

    return 0;
}