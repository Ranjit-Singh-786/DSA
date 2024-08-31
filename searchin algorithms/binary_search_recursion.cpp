#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key is smaller than mid, it can only be in the left subarray
        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);

        // Otherwise, the key can only be in the right subarray
        return binarySearch(arr, mid + 1, high, key);
    }

    // If the key is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
