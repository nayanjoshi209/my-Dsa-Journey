    #include<iostream> 
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int digite='A'+n;
    for(int row=1;row<=n;row++)
    {
        for(int col =1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(char col='A';col<='A'+row-1;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    return 0;
}
