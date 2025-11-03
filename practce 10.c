#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Leaders in the array are: ");
    for(int i = 0; i < n; i++) {
        int j;
        for(j = i + 1; j < n; j++) {
            if(arr[i] <= arr[j])
                break;
        }
        if(j == n)
            printf("%d ", arr[i]);
    }

    return 0;
}