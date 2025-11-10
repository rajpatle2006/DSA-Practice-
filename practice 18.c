#include <stdio.h>

int main() {
    int n;
    printf("Enter number of bars: ");
    scanf("%d", &n);
    
    int height[n];
    printf("Enter heights of bars:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &height[i]);
    
    int left[n], right[n];
    int water = 0;

    left[0] = height[0];
    for (int i = 1; i < n; i++)
        left[i] = (height[i] > left[i - 1]) ? height[i] : left[i - 1];

    right[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = (height[i] > right[i + 1]) ? height[i] : right[i + 1];

    for (int i = 0; i < n; i++) {
        int min = (left[i] < right[i]) ? left[i] : right[i];
        water += min - height[i];
    }

    printf("Total trapped water = %d\n", water);
    return 0;
}