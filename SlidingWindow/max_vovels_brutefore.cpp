    // 0(n*n) time complexity of vovelCount in Kth window
#include<iostream>
using namespace std;

bool isVovel(char ch)
{
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

int vovelCount(string& s,int k)
{
    int maxVovel=0,windowVovel=0;
    int n=s.size();
    int count=0;

    for(int i=0;i<=n-k;i++)
    {
        for(int j=i;j<i+k;j++)
        {
            if(isVovel(s[j]))
            {
                count++;    
            }   
        }
        
        maxVovel=max(maxVovel,count);
        count=0;
    }

    return maxVovel;
}

int main()
{
    char ch;
    int k;

    string s;    
    cout<<"Enter your string : \n";
    getline(cin , s);

    cout<<"Enter the value of k WINDOWSIZE : ";
    cin>>k;

    isVovel(ch);
    cout<<vovelCount(s,k);
}