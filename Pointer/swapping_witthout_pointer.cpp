// swapping without pointer by pass by refrence

#include<iostream>
using namespace std;

void swapping(int& p1 , int& p2)
{
    int temp =p1;
    p1 =  p2;
    p2 = temp;
}

int main()
{
    int first=10,secound=20;

    swapping(first , secound);

    cout<<"value after swapped is - " <<first<<" "<<secound;
}