#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &sum);

    int start = 0, curr_sum = 0;
    for(int end = 0; end < n; end++) {
        curr_sum += arr[end];
        while(curr_sum > sum && start <= end) {
            curr_sum -= arr[start++];
        }
        if(curr_sum == sum) {
            printf("Subarray found from index %d to %d\n", start, end);
            return 0;
        }
    }
    printf("No subarray with given sum found.\n");
    return 0;
}