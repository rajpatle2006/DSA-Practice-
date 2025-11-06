#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d numbers (1 to %d but one missing):\n", n-1, n);
    for(int i=0; i<n-1; i++) scanf("%d", &arr[i]);

    int total = n * (n + 1) / 2;
    for(int i=0; i<n-1; i++) sum += arr[i];

    printf("Missing number is %d\n", total - sum);
    return 0;
}