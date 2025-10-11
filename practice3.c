#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    // Sort array in ascending order
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Kth Minimum element = %d\n", arr[k-1]);
    printf("Kth Maximum element = %d\n", arr[n-k]);

    return 0;
}