#include <iostream>
using namespace std;

int getPivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int n, int key, int offset) {
    int start = offset;
    int end = offset + n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        // go to right wala part
        if (key > arr[mid]) {
            start = mid + 1;
        } else { // key < arrr[mid]
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(int arr[], int n, int k) {
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        // BS on second line
        return binarySearch(arr, n - pivot, k, pivot);
    } else {
        // BS on first line
        return binarySearch(arr, pivot, k, 0);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    int position = findPosition(arr, n, k);
    if (position != -1) {
        cout << "Element found at position " << position << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}