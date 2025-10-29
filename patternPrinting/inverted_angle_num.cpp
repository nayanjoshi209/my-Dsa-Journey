//     #include<iostream> //Alternative method 1st
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     for(int row=1;row<=n;row++)
//     {
//         for(int col =1;col<=n-row;col++)
//         {
//             cout<<"  ";
//         }
//         for(int col=1;col<=row;col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int space=n;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(col>=space)
            cout<<row<<" ";
            else
            cout<<"  ";
        }
        cout<<endl;
        space--;
    }
    return 0;

    return 0;
}