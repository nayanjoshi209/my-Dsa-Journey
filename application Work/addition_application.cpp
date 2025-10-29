// Frist Application by NAYAN  
#include<iostream> 
#include<cstdlib>       // Alternative hrader file to use Clear Screen 
using namespace std;
int main()
{
    bool userRun = true;

    while(userRun)
    {
        system("cls");
    cout<<"\n------------DEAR USER !------\n ----- Welcome to sum calculator ----------   \n\n";
    int temp,n,rem,ans=0;
    cout<<"Enter the number : ";
    cin>>n;
    temp=n;

    if(n>=1 && n<=1000)
    {
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            ans=ans+rem;
        }
         cout<<"The sum of Digite is : "<<ans;
    }
    else
    {
        cout<<"\n\nPlese enter values from  1 to 1000 only ! : ";
    }

        char userChoise;
        cout<<"\n\n\n---------Enter the 'R' button to restart the Apllication else exit the app.... ";
        cin>>userChoise;

        userRun = (userChoise == 'R');

    }
    return 0;
}