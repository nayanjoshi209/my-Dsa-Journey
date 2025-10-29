                     // Print NAYAN in one loop 
#include<iostream>
using namespace std;
int main()
{
    int row=5,column=40;
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=40;c++)
        {
            if(c==1 || r==c&&c<=5 || c==5 || c==9 || r==1&&c<=13&&c>=9 || c==13 || r==3&&c<=13&&c>=9 || r==3&&c<=21&&c>=17 ||r<=3&&c==17 || c==21 || r==5&&c<=21&&c>=17 || c==25 || r==1&&c<=30&&c>=25 || c==30 || r==3&&c<=30&&c>=25 || c==34 || r==2&&c==35 ||r==3&&c==36 || r==4&&c==37 || c==38) //print NAYAN
            cout<<"* ";
            else
            cout<<"  ";
        }
        //  for(int c=9;c<=16;c++)
        // {
        //     if(c==9 || r==1&&c<=13 || c==13 || r==3&&c<=13) //print A
        //     cout<<"* ";
        //     else
        //     cout<<"  ";
        // }
        //   for(int c=17;c<=24;c++)
        // {
        //     if( r==3&&c<=21 ||r<=3&&c==17 || c==21 || r==5&&c<=21) //print Y
        //     cout<<"* ";
        //     else
        //     cout<<"  ";
        // }
        //  for(int c=25;c<=33;c++)
        // {
        //     if(c==25 || r==1&&c<=30 || c==30 || r==3&&c<=30) //print A
        //     cout<<"* ";
        //     else
        //     cout<<"  ";
        // }
        //  for(int c=34;c<=38;c++)
        // {
        //     if(c==34 || r==2&&c==35 ||r==3&&c==36 || r==4&&c==37 || c==38 ) //print N
        //     cout<<"* ";
        //     else
        //     cout<<"  ";
        // }
        cout<<endl;
    }
    return 0;
}