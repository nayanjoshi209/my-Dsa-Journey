#include <iostream>
using namespace std;

// Function to add an element at a specified index
void addElement(int arr[], int n, int index, int value) {
    // Shift elements to the right to make space for the new element
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[index] = value;
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

     int k;
    cout << "Enter the index where the value will be inserted (0-based indexing): ";
    cin >> k;

    int value;
    cout << "Enter the value to be inserted: ";
    cin >> value;

    // Increase the array size to accommodate the new element
    int newArr[n + 1];
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }

    addElement(newArr, n + 1, k, value);

    cout << "Updated array: ";
    printArray(newArr, n + 1);

    return 0;
}
