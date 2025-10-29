#include<iostream>
using namespace std;
 
  // a x x x c c c c b x x x x x x x x d d d d d d d d  (x == padding)
class a
{
    char a;
    int c;
    char b;
    double d;
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<' ';
}