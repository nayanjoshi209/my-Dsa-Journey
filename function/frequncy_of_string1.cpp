#include<iostream>
#include<vector>
using namespace std;

void getFrequency(string& s)
{
    // int n=s.size();
    int count=0,base_index=0; 
   vector<int>index(26,0);

   for(int i=0;i<s.size();i++)
   {
    base_index=s[i]-'a';
    index[base_index]++;
   }

   for(int i=0;i<26;i++)
   {

     if(index[i]!=0)
    {
        cout<<char('a'+i)<<" =  "<<index[i]<<endl;
    }

   }
    
}

int main()
{
    string s;
    cout<<"Enter your sentance (without sapces ) : \n";
    cin>>s;

    getFrequency(s);
}
