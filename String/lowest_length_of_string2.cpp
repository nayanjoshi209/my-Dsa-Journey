#include<iostream>
using namespace std;

int minLengthString ( string& s)
{
    int n=s.size();

    int wordLength=0,minLength=INT_MAX;
    int accesPoint=0;

    while(accesPoint<n)
    {
        if(s[accesPoint]==' ')
        {
            minLength=min(minLength,wordLength);
            accesPoint++;
            wordLength=0;
        }
        wordLength++;
        accesPoint++;
    }
    // wordLength=min(minLength,wordLength);
    return minLength;
}
int main() 
{
    string s;
    cout<<"Enter the sentence ! \n";
    getline(cin,s);

    cout<<minLengthString(s);

    return 0;
}