#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to count: ");
    scanf("%d", &num);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            count++;
        }
    }
    
    printf("Number %d occurs %d times in the array.\n", num, count);
    
    return 0;
}