#include<iostream>
using namespace std;
int MaxWindowVovel(string& str , int k)
{
    int start=0,end=0;
    int n=str.size();
    int count=0;
    int stringVovel=0,maxVovels=0;

    while(end<n)
    {
        if(str[end]=='a' || str[end]=='e' || str[end]=='i'  || str[end]=='o' || str[end]=='u')
        {
            count++;
        }
        if(end-start+1==k)
        {
            maxVovels=max(maxVovels,count);
            if(str[start]=='a' || str[start]=='e' || str[start]=='i' || str[start]=='o' || str[start]=='u' ) 
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
    string prakhar;
    cout<<"Enter your string : \n";
    getline(cin,prakhar);
    cout<<"Enter the size of window (K): ";
    cin>>k;


    cout<<MaxWindowVovel(prakhar,k);
}
