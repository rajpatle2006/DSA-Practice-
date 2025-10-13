#include <stdio.h>

void rearrange(int arr[], int n) {
    int temp[n];
    int j = 0;

    // First copy all negative numbers to temp
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            temp[j++] = arr[i];
    }

    // Then copy all positive numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            temp[j++] = arr[i];
    }

    // Copy elements back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = { -1, 2, -3, 4, 5, -6, -7, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Array after moving negatives to beginning:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}