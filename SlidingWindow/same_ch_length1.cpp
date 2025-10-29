#include<iostream>
#include<vector>
using namespace std;

int getSameChFreq(string& s)
{
    int n=s.size();
    int i=0,j=0,ch;
    int maxLength=0,currentLength=0;

    vector<int>freq(26);

    while(j<n)
    
    {
        ch=s[j]-'a';
        freq[ch]++;
        if(freq[ch]==1) currentLength++;
    

        while(currentLength > 1)
        {
            ch=s[i]-'a';
            freq[ch]--;
            if(freq[ch]==0) currentLength--;
            i++;
        }
            maxLength=max(maxLength,j-i+1);
            j++;
    }

    return maxLength;
}

int main()
{
    string s;
    cout<<"Enter your sentance : \n";
    cin>>s;

    cout<<getSameChFreq(s);
}