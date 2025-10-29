#include<iostream>
using namespace std;

class animal
{
    public: 

    virtual void speak()  // virtual key word minimize this fn
    {
        cout<<"HUHU\n";
    }

};

class dog : public animal
{
    public: 

    void speak()
    {
        cout<<"Bark\n";
    }

};

int main()
{
    animal *p;
    p = new dog();
    p -> speak(); 
}

// #include<iostream>
// using namespace std;

// class animal
// {
//     public: 

//     void speak()
//     {
//         cout<<"HUHU\n";
//     }

// };

// class dog : public animal
// {
//     public: 

//     void speak()
//     {
//         cout<<"Bark\n";
//     }

// };

// int main()
// {
//     animal *p
//     p = new dog;
//     p -> speak; 
// }