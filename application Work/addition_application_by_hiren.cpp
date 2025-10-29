// Program to find the sum of digits of a number ~ coded by Hiren
#include <iostream>
#include <cstdlib>
using namespace std;

int getDigitSum(int num) {
    int sum = 0;

    while(num) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

// Driver code
int main() {
    bool userRunsApp = true;

    while(userRunsApp) {
        system("cls");

        int num;
        cout<<"Enter a number: ";
        cin>>num;

        if(num < 1 || num > 1000) {
            cout<<"Enter a value which lies between 1 and 1000!";
        }
        else {
            int sum = getDigitSum(num);
            cout<<"The sum of digits is: "<<sum;
        }

        char userChoice;
        cout<<"\n\nPress \'R\' to restart the application else it will exit: ";
        cin>>userChoice;
        userRunsApp = (userChoice == 'R');
    }

    return 0;
}