#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = arr[0];
    int sum = arr[0];

    for(int i = 1; i < n; i++) {
        if(sum < 0)
            sum = arr[i];   // start new subarray
        else
            sum = sum + arr[i];  // continue current subarray

        if(sum > max_sum)
            max_sum = sum;   // update max sum
    }

    printf("Maximum Subarray Sum = %d\n", max_sum);
    return 0;
} 