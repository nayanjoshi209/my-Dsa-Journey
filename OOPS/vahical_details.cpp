#include<iostream>
using namespace std;

class vehical
{
    string model;
    string year;
    string brand;
    string FuelType;

    public:

    void count(int count)
    {
        cout<<"\n\nEnter the details of vechical No - "<<count;
    }
    void getData()
    {
        cout<<"\n\nEnter the model of vehical : ";
        getline(cin , model);

        cout<<"\nEnter the brand of vechical : ";
        getline(cin , brand);

        cout<<"\nEnter the name of supported fuel : ";
        getline(cin , FuelType);

        cout<<"\nEnter the manifacture year : ";
        getline(cin,year);

    }

    void display()
    {
        cout<<"\n\nmodel of vechical is : "<<model;
        cout<<"\nmanifacture year is : "<<brand;
        cout<<"\nSupported fuel-Type is : "<<FuelType;
        cout<<"\nmanifacture year is : "<<year;

    }
};

int main()
{
    vehical v1,v2,v3;
    v1.count(1);
    v1.getData();
    v1.display();

    v2.count(2);
    v2.getData();
    v2.display();

    v3.count(3);
    v3.getData();
    v3.display();
}