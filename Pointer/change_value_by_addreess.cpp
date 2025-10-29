#include<iostream>
using namespace std;

void changeVal(int* val)
{
    // val+=1;
    // val++1; Its both not increse  values
    *val+=1;

}

int main()
{
    int num=5;
    changeVal(&num);
    cout<<num;
}