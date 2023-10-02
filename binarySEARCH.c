#include <stdio.h>

int binarySearch(int arr[], int low, int high, int num) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == num) {
            return mid;
        }

        if (arr[mid] < num) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 7;

    int result = binarySearch(arr, 0, n - 1, num);

    if (result != -1) {
        printf("Element found at index: %d  ", result);
    } else {
        printf("Element not found ");
    }

    return 0;
}
