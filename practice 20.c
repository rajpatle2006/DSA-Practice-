#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxProd = arr[0], minProd = arr[0], result = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            int temp = maxProd;
            maxProd = minProd;
            minProd = temp;
        }

        if (arr[i] > arr[i] * maxProd)
            maxProd = arr[i];
        else
            maxProd = arr[i] * maxProd;

        if (arr[i] < arr[i] * minProd)
            minProd = arr[i];
        else
            minProd = arr[i] * minProd;

        if (maxProd > result)
            result = maxProd;
    }

    printf("Maximum Product Subarray = %d\n", result);
    return 0;
}