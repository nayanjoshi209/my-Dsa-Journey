#include <iostream>
using namespace std;

int sum1(int& x, int& y) {
    return x + y;
}

// Driver code
int main() {
    int a = 4, b = 1;

    cout<<a<<" "<<b<<'\n';
    
    sum1(a, b);
    // sum1(4, 8 )ERROR its because you must use a variable name for representing any memory location (or could say passed value must be a left value). Or could say that it must be a non-const value

    cout<<a<<" "<<b<<'\n';

    return 0;
}