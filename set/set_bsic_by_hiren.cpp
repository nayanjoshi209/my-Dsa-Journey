#include <unordered_set>
#include <iostream>
#include <set>
using namespace std;

// Driver code
int main() {
    // Ordered set
    set<int> st;

    st.insert(5);
    st.insert(4);
    st.insert(3);
    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(5);

    // cout<<st.size();
    // 3 4 5    _
           // end

    // set<int>::iterator it = st.begin(); // address of 3
    // auto it = st.begin(); // address of 3

    // cout<<*it;       // 3
    // cout<<*(++it);   // 4
    // cout<<*(++++it); // 5

    // for(auto it = st.begin(); it != st.end(); ++it)
        // cout<<*it<<'\n';

    // for(int i = 0; i < 3; ++i)
        // cout<<i<<'\n';

    for(int val : st)   
        cout<<val<<'\n';

    st.erase(3);
    // cout<<st.size(); // prints 2

    st.erase(4);
    // cout<<st.size(); // prints 1

    cout<<st.count(5);
    
    auto it = st.find(5); // stores the addresss of 5

    return 0;
}