#include<iostream>
using namespace std;
int main()
{
    cout<<"\n\n     --------------->  WELCOME DEAR USER IN THE MINI PROGRAME   <-------------------       "<<endl<<endl;
    int n,x;
    cout<<"\n\n           Enter the size of Array -> : ";
    cin>>n;
    int arr[n];
    int newArr[n+1];
    int newArrr[n-1];
    int index,value;
    int k;

    cout<< " \n           Enter the "<<n<<" elemant in array ->: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<endl<<endl;
    cout<<"   ---------------(PRESS) 1-----------   SEARCHING --------->> : "<<endl;;
    cout<<"   ---------------(PRESS) 2-----------   INSERCTION --------->> : "<<endl;;
    cout<<"   ---------------(PRESS) 3-----------   DELECTION --------->> : "<<endl;
    cout<<"   ";
    cin>>x;

    switch(x)
    {
        case 1:
        {
    cout<<"\n\n     Enter the elemant should be searcing hre index :: value should be persent in arrays -> :";
    cin>>k;

    for(int i=0;i<=n;i++)
    {
        if(arr[i]==k)
        cout<<"\n\n\n      Element is --"<<k<<"-- Present in index -: " <<i<<endl;
    } 
        cout<<endl<<endl<<"<----------------THANK YOU------------------>"<<endl<<endl;
        break;
        }

        case 2:
    cout<< " \n          Indexing of array start with 0 : "; 
    cout<<"\n          Enter the index of array -> : ";
    cin>>index;

    cout<<"\n\n          Enter  the value insert in array -> : ";
    cin>>value;

    for(int i=0;i<index;i++)
    {
        newArr[i]=arr[i];
    }
    newArr[index]=value;
    cout<<"      "<<endl;
    for(int i=index;i<n+1;i++)
    {
        newArr[i+1]=arr[i];
    }
    cout<<"\n\n            ------- NEW ARRAY IS AFTER ADD VALUE- "<<value<<"  IN INDEX - "<<index<<"----> ";
    cout<<endl<<endl;
    cout<<"       ";
    for(int i=0;i<=n;i++)
    {
        cout<<newArr[i]<<"  ";
    }
        cout<<endl<<endl<<"<----------------THANK YOU------------------>"<<endl<<endl;   
    break;

    case 3:
    int index;
    cout<< " \n                   Indexing of array start with 0 : ";
    cout<<"\n              Enter the Index of array of delections ->: ";
    cin>>index;

    for(int i=0;i<index;i++)
    {
        newArrr[i]=arr[i];
    }
    // newArr[index]=arr[index+1];
    
    for(int i=index;i<n;i++)
    {
        newArrr[i]=arr[i+1];
    }
    cout<<"\n\n         ----NEW ARRAY IS AFTER REMOVIENG INDEX---- "<<index<<"  IS--->>>";
    cout<<endl<<endl<<"      ";
    for(int i=0;i<n-1;i++)
    {
        cout<<newArrr[i]<<"  ";
    }
    cout<<endl<<endl<<"<----------------THANK YOU------------------>"<<endl<<endl;
        break;    

    }

}