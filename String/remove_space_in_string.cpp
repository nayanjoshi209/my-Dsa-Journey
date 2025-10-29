#include<iostream>
using namespace std;

string rmvSpaces ( const string& sentence)
{
    int n=sentence.size();
    string ans;
    int start=0;

    while(start<n)
    {
        if(sentence[start]!=' ')
        {
            ans.push_back(sentence[start]);
            // start++;
        }
        start++;
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