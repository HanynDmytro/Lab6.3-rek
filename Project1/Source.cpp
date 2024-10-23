#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index = 0) {
    if (index == size) {
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

void printValue(int arr[], int size, int index = 0) {
    if (index == size) {
        return;
    }
    cout << index << ": " << arr[index] << endl;
    printValue(arr, size, index + 1);
}

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    cout << "Array: ";
    printArray(arr, size);
    cout << endl;

    printValue(arr, size);

    return 0;
}
