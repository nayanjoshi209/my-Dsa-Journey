#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>stc;

    stc.push(12);
    stc.push(24);
    stc.push(36);
    stc.push(48);
    stc.push(60);
    stc.push(72);

    stc.pop();

    cout<<stc.size()<<endl;

    cout<<stc.top()<<endl;

    cout<<stc.empty()<<endl;

    return 0;

}

// Vector aur Stack dono C++ mein stl (Standard Template Library) ke hissa hain, lekin inmein kuchh mahatvapurn antar hain:

// # Vector
// 1. Dynamic Array: Vector ek dynamic array hai, jismein elements ko dynamically add aur remove kiya ja sakta hai.
// 2. Random Access: Vector mein elements ko random access kiya ja sakta hai, matlab ki aap kisi bhi index par element ko access kar sakte hain.
// 3. Insertion aur Deletion: Vector mein elements ko kisi bhi position par insert aur delete kiya ja sakta hai.

// # Stack
// 1. Last-In-First-Out (LIFO): Stack ek LIFO data structure hai, jismein jo element sabse pehle push kiya jata hai, woh sabse pehle pop kiya jata hai.
// 2. Push aur Pop: Stack mein elements ko push aur pop kiya ja sakta hai, lekin elements ko kisi bhi position par insert aur delete nahi kiya ja sakta.
// 3. Top Element: Stack mein top element ko access kiya ja sakta hai, lekin baaki elements ko access nahi kiya ja sakta.

// # Key Differences
// - Access: Vector mein elements ko random access kiya ja sakta hai, jabki Stack mein sirf top element ko access kiya ja sakta hai.
// - Insertion aur Deletion: Vector mein elements ko kisi bhi position par insert aur delete kiya ja sakta hai, jabki Stack mein elements ko sirf push aur pop kiya ja sakta hai.
// - Order: Vector mein elements ko kisi bhi order mein store kiya ja sakta hai, jabki Stack mein elements ko LIFO order mein store kiya jata hai.