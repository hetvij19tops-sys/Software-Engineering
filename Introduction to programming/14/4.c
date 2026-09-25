#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int deliveryTime[] = {35, 20, 45, 15, 30, 25};
    int n = 6;

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        // Find the smallest element
        for (int j = i + 1; j < n; j++) {
            if (deliveryTime[j] < deliveryTime[minIndex]) {
                minIndex = j;
            }
        }

        // Swap smallest element with current element
        int temp = deliveryTime[i];
        deliveryTime[i] = deliveryTime[minIndex];
        deliveryTime[minIndex] = temp;

        printf("After selection %d: ", i + 1);
        printArray(deliveryTime, n);
    }

    return 0;
}