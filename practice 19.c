#include <stdio.h>

void merge(int arr1[], int arr2[], int n, int m) {
    int i = n - 1, j = 0;
    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            int temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
        }
        i--;
        j++;
    }
}

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
}

int main() {
    int arr1[] = {1, 5, 9, 10, 15, 20};
    int arr2[] = {2, 3, 8, 13};
    int n = 6, m = 4;

    merge(arr1, arr2, n, m);
    sort(arr1, n);
    sort(arr2, m);

    printf("Array 1: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\nArray 2: ");
    for (int i = 0; i < m; i++)
        printf("%d ", arr2[i]);
    
    return 0;
}