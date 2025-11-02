#include <stdio.h>

int checkSortedAndRotated(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        // check if current element is greater than next element
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }

    // if there is exactly one such point, then it is sorted and rotated
    if (count == 1)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (checkSortedAndRotated(arr, n))
        printf("Array is sorted and rotated.");
    else
        printf("Array is NOT sorted and rotated.");

    return 0;
}