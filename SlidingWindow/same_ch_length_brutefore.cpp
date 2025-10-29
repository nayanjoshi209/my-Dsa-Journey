#include<iostream>
#include<vector>

using namespace std;
int getMaxLengthSubstrig(string& s)
{
    int n=s.size();
    int maxLength=0,currentLength=0;
    vector<int>freq(26);

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
       
        {
            int ch=s[j]-'a';
            freq[ch]++;

            if(freq[ch]==1)  currentLength++;
        
            while(currentLength>1)
            {
                int ch=s[i]-'a';
                freq[ch]--;
                if(freq[ch]==0) currentLength--;
                i++;
            }
            maxLength=max(maxLength,j-i+1);
        } 
    }
    return maxLength;
}
int main()
{
    string s;
    cout<<"Enter your sentance : ";
    cin>>s;

    cout<<getMaxLengthSubstrig(s);

}