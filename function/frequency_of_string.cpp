
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

// #include<iostream>
// #include<vector>
// using namespace std;

// int getFrequency(string& s)
// {
//     int n=s.size();
//     int count=0,base_index=0; 
//     vector<int>index(n);
//     int max_var=0;

//     for(int i=0;i<n;i++)
//     {
//         base_index=s[i]-'a';
//         index[i]=base_index;
//     }

//     // int m=index.size();

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(index[i]!=index[j])
//             {
//                 count++;
//             }
            
//         }
//         max_var=max(max_var,count);
//         count=0;
//     }
//     return max_var;
// }

// int main()
// {
//     string s;
//     cout<<"Enter your sentance (without sapces ) : \n";
//     cin>>s;

//     cout<<getFrequency(s);
// }







// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // void getFrequency(string& s)
// // {
// //     int n=s.size();
// //     int count=1,base_index=0; 
// //     vector<int>index(n);
// //     int max_var=0;

// //     for(int i=0;i<n;i++)
// //     {
// //         base_index=s[i]-'a';
// //         index[i]=base_index;
// //         cout<<index[i]<<" ";
// //     }

// //     // int m=index.size();

// //     // for(int i=0;i<n;i++)
// //     // {
// //     //     for(int j=0;j<n;j++)
// //     //     {
// //     //         if(index[i]!=index[j])
// //     //         {
// //     //             count++;
// //     //         }
            
// //     //     }
// //     //     max_var=max(max_var,count);
// //     //     count=0;
// //     // }
// //     // return max_var;
// // }

// // int main()
// // {
// //     string s;
// //     cout<<"Enter your sentance (without sapces ) : \n";
// //     cin>>s;

// //     getFrequency(s);
// // }