#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int pos = 0, neg = 1; 
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0 && pos < n) {
            temp[pos] = arr[i];
            pos += 2;
        } 
        else if(arr[i] < 0 && neg < n) {
            temp[neg] = arr[i];
            neg += 2;
        }
    }

    for(int i = 0; i < n; i++)
        arr[i] = temp[i];

    printf("Rearranged array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}