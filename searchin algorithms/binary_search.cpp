#include <iostream>
using namespace std;
// #include <vector>

int binarySearch(int arr[], int size , int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target is greater, ignore left half
        if (arr[mid] > target) {
            right = mid - 1;
        }
        // If target is smaller, ignore right half
        else {
            left = mid + 1;
        }
    }

    // Target was not found in the array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int target = 30;
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << std::endl;
        cout<<"Your item is : "<<arr[result]<<endl;
    } else {
        cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
