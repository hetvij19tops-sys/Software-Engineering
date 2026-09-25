#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {5, 11, 23, 34, 47, 59, 62, 88};
    int n = 8;

    int result1 = binarySearch(arr, n, 34);
    int result2 = binarySearch(arr, n, 90);

    printf("Index of 34: %d\n", result1);
    printf("Index of 50: %d\n", result2);

    return 0;
}