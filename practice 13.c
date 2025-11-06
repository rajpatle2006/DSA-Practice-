#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &sum);

    printf("Pairs with given sum:\n");
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == sum)
                printf("(%d, %d)\n", arr[i], arr[j]);
        }
    }
    return 0;
}