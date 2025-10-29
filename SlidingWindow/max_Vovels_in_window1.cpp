#include<iostream>
using namespace std;

bool isVovels(char ch)
{
    return ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; 
}

int MaxWindowVovel(string& str , int k)
{
    int start=0,end=0;
    int n=str.size();
    int count=0;
    int stringVovel=0,maxVovels=0;

    while(end<n)
    {
        if(isVovels(str[end]))
        {
            count++;
        }
        if(end-start+1==k)
        {
            maxVovels=max(maxVovels,count);
            if(isVovels(str[start]));
            {
                count--;
            }
            start++;
        }
        end++;
    }
    return maxVovels;
}
int main()
{
    int k;
    char ch;
    string prakhar;
    cout<<"Enter your string : \n";
    getline(cin,prakhar);
    cout<<"Enter the size of window (K): ";
    cin>>k;

    isVovels(ch);
    cout<<MaxWindowVovel(prakhar,k);
}
