#include<iostream>
using namespace std;

class Rectangle
{
    // private:
    int length , breath;

    public:
    // int count=1;

    void num(int count)
    {
        cout<<"\n\nEnter the details of rectangle : "<<count<<endl;
        // count++;
    }

    void getValues()
    {   
        cout<<"\n\nEnter the length of rectangle : ";
        cin>>length;

        cout<<"\nEnter the breath of rectangle : ";
        cin>>breath;
    }

    void calculateArea()
    {
        cout<<"\nArea is : \n";
        cout<<length*breath<<endl;    
    }

    void calculatePerameter()
    {
        cout<<"\nPerameter is : \n";
        cout<<2*(length+breath);
    }

};

int main()
{
    Rectangle R1,R2,R3;
    
    R1.num(1);
    R1.getValues();
    R1.calculateArea();
    R1.calculatePerameter();

    R2.num(2);
    R2.getValues();
    R2.calculateArea();
    R2.calculatePerameter();

    R3.num(3);
    R3.getValues();
    R3.calculateArea();
    R3.calculatePerameter();

}