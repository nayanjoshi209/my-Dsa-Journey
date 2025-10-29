#include<iostream>
using namespace std;

int getMinLength ( string& s)
{
    int n=s.size();

    int wordLength=0, minLength=INT_MAX;

    int end=0;

    while(end<n)
    {
        if(s[end]==' ')
        {
            minLength = min(minLength,wordLength);
            end+=1;
            wordLength=0;
        }
        wordLength++;
        end++;
    }
    //  minLength = min(minLength,wordLength);
     return minLength;

}

int main()
{
    string s;
    cout<<"Enter the sentence ! \n ";
    getline(cin,s);
    
    cout<<getMinLength(s);

    return 0;
}