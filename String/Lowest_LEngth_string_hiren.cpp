#include <iostream>
using namespace std;

// O(N) & O(1)
int getMinWordLength(const string& s) {
    int n = s.size();

    int minLength = INT_MAX; 
    int start = 0, end = 0;                  

    while(end < n) {
        if(s[end] == ' ') {
            minLength = min(minLength, end-start);
            start = end + 1;
        }
        end++;
    }

    minLength = min(minLength, end-start);

    return minLength;
}

// Driver code
int main() {
    string s;
    getline(cin, s);

    cout<<getMinWordLength(s);
    
    return 0;
}
