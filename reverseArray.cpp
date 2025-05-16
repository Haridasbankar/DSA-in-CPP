#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 7, 6, 9, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    return 0;
}
