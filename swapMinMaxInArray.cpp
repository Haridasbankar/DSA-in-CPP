#include<iostream>
#include<climits> // For INT_MAX and INT_MIN
using namespace std;

int swapMinMax(int arr[], int sz) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIdx = 0, maxIdx = 0;

    // Find smallest and largest values and their indices
    for (int i = 0; i < sz; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            minIdx = i;
        }
        if (arr[i] > largest) {
            largest = arr[i];
            maxIdx = i;
        }
    }

    // Swap the values
    swap(arr[minIdx], arr[maxIdx]);

    cout << "Smallest was: " << smallest << " at index " << minIdx << endl;
    cout << "Largest was: " << largest << " at index " << maxIdx << endl;

    cout << "Array after swap: ";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int main() {
    int arr[] = {4, 6, 5, 7, 8, 3, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);

    swapMinMax(arr, sz);

    return 0;
}
