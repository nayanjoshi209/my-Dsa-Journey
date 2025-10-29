#include <iostream>
using namespace std;

void func(int* p1) {
    *p1 = 78;
}

//  -----
// |    |
// | 78 |
// |    |
// -----
// 0x45
//  (a)

// ----------------------------------------

// -----
// |   |
// |0x45|
// |   |
// -----
//  0x23
//  (ptr1)    

// ----------------------------------------

// -----
// |   |
// |0x23|
// |   |
// -----
//  0xA
//  (p1)    

// Driver code
int main() {
    int a = 4;

    int* ptr1 = &a;

    func(ptr1);

    cout<<a;

    return 0;
}