#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int k=n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=k)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }   
        }
        k--;
        cout<<endl;
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// // Driver code
// int main() {
//     int n ;
//     cout<<"Enter the number of rows : ";
//     cin>>n; 
//     int leftMid = n/2;
//     int rightMid= n/2;
   

//     for (int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j>= leftMid && j<= rightMid )
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         leftMid--;
//         rightMid++;
//         cout<<endl;
//     }
//     return 0;
// }