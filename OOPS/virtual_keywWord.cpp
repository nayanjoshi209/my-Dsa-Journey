#include<iostream>
using namespace std;

class teacher
{
    public:

    virtual void teaching()
    {
        cout<<"Teaching in physicallly : ";
    }
};

class YTteacher : public teacher
{
    public:

    void teaching()
    {
        cout<<"Teaching in Virtually : ";
    }
};

int main()
{
    teacher *t1;
    t1 = new YTteacher();
    t1 -> teaching();


}